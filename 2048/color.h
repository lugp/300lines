/*************************************************************************
	> File Name: color.h
	> Author: lugp
	> Mail:   lugp@qiyangtech.com
	> Created Time: Sun 26 Nov 2017 08:41:50 PM CST
 ************************************************************************/

#ifndef _COLOR_H
#define _COLOR_H

#include <stdio.h>

#define SPACE()         printf("       ")
#define RED(val)        printf("\033[31;1m%4d   \033[0m", val)
#define GREEN(val)      printf("\033[32;1m%4d   \033[0m", val)
#define YELLOW(val)     printf("\033[33;1m%4d   \033[0m", val)
#define BLUE(val)       printf("\033[34;1m%4d   \033[0m", val)
#define PURPLE(val)     printf("\033[35;1m%4d   \033[0m", val)
#define DEEPGREEN(val)  printf("\033[36;1m%4d   \033[0m", val)

void print_number(int val);

#endif
