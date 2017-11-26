/*************************************************************************
	> File Name: color.c
	> Created Time: Sun 26 Nov 2017 08:46:13 PM CST
 ************************************************************************/

#include "color.h"

void print_number(int val)
{
    switch(val){
        case 0:
        SPACE();
        break;
        
        case 2:
        case 2048:
        RED(val);
        break;

        case 4:
        case 1024:
        GREEN(val);
        break;

        case 8:
        case 512:
        YELLOW(val);
        break;

        case 16:
        case 256:
        BLUE(val);
        break;

        case 32:
        case 128:
        PURPLE(val);
        break;

        case 64:
        DEEPGREEN(val);
        break;

        default:
        break;

    }
}

#ifdef DEBUG

int main()
{
    int x = 2048;
    while(x){
        print_number(x);
        x /= 2;
    }
    return 0;
}

#endif
