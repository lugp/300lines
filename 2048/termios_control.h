/*************************************************************************
	> File Name: termios_control.h
	> Author: lugp
	> Mail:   lugp@qiyangtech.com
	> Created Time: Sun 26 Nov 2017 08:19:53 PM CST
 ************************************************************************/

#ifndef _TERMIOS_CONTROL_H
#define _TERMIOS_CONTROL_H

#include <termios.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

enum command
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    QUIT,
    INVALID
};

char my_getch(void);

enum command user_command(void);

#endif
