/*************************************************************************
	> File Name: draw.c
	> Author: lugp
	> Mail:   lugp@qiyangtech.com
	> Created Time: Sun 26 Nov 2017 09:04:53 PM CST
 ************************************************************************/

#include "draw.h"
#include "color.h"

void draw_form(int box[])
{
    int i, j;
    static int step = 0;
    static int point = 0;
    printf("\033[2J");
    printf("\033[?25l");
    printf("steps: %4d \tpoints: %10d \n", step++, point++);

    for(i = 0; i < 4; i++){
        printf("\033[30;1m---------------------------------\n");
        printf("\033[30;1m|       |       |       |       |\n");
        
        for(j = 0; j < 4; j++){
            printf("\033[30;1m|");
            print_number(box[4 * i + j]);
        }
        printf("\033[30;1m|\n");
        printf("\033[30;1m|       |       |       |       |\n");
    }
    printf("\033[30;1m---------------------------------\n\033[0m");
    printf("\033[?25h");
}

#ifdef DRAW_DEBUG

int main(int argc, char **argv)
{
    int box[16] = {2, 0, 4, 8};
    draw_form(box);
    return 0;
}

#endif
