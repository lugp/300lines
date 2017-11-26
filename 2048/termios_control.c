/*************************************************************************
	> File Name: termios_control.c
	> Created Time: Sun 26 Nov 2017 08:25:24 PM CST
 ************************************************************************/

#include "termios_control.h"

char my_getch()
{
    int c = 0;
    int res = 0;
    
    struct termios org_opts, new_opts;

    res = tcgetattr(STDIN_FILENO, &org_opts);
    assert(res == 0);

    memcpy(&new_opts, &org_opts, sizeof(new_opts));
    new_opts.c_lflag &= ~(ICANON | ECHO | ECHOE | ECHOK | ECHONL | ECHOPRT | ECHOKE | ICRNL);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_opts);

    c = getchar();

    res = tcsetattr(STDIN_FILENO, TCSANOW, &org_opts);
    assert(res == 0);
    return c;
}

enum command user_command(void)
{
    enum command dir;
    char ch = my_getch();

    if(ch == 27){
        ch = my_getch();
        if(ch == 91){
            ch = my_getch();
            if(ch == 65)
                dir = UP;
            else if(ch == 66)
                dir = DOWN;
            else if(ch == 67)
                dir = RIGHT;
            else if(ch == 68)
                dir = LEFT;
        }
    }
    else if(ch == '\n')
        dir = QUIT;
    else
        dir = INVALID;

    return dir;
}

#ifdef DEBUG

int main(int argc, char *argv[])
{
    char ch;
    while(1){
        ch = my_getch();

        if(ch == 27){
            ch = my_getch();
            if(ch == 91){
                ch = my_getch();
                switch(ch){
                    
                    case 65:
                    printf("UP\n");
                    break;

                    case 66:
                    printf("DOWN\n");
                    break;

                    case 67:
                    printf("RIGHT\n");
                    break;

                    case 68:
                    printf("LEFT\n");
                    break;

                    default:
                    break;
                }
            }
        }
        else if(ch == 'w' || ch == 'W'){
            printf("UP\n");
        }
        else if(ch == 'a' || ch == 'A'){
            printf("LEFT\n");
        }
        else if(ch == 's' || ch == 'S'){
            printf("DOWN\n");
        }
        else if(ch == 'd' || ch == 'D'){
            printf("RIGHT\n");
        }
    }

    return 0;
}

#endif
