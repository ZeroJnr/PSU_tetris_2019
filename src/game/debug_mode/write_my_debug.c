/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** Twrite_1part of debug mode
*/

#include "proto_tetris.h"

static char *write_my_operator(char *buffer)
{
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == ',')
            buffer[i] = '*';
    }
    return buffer;
}

static void print_list(tetris_t *tetris, int val1)
{
    for (int val2 = 0; LIST1[val1][val2]; val2++) {
        if (LIST1[val1][val2] == 27) {
            my_putstr("^E");
            my_putchar(LIST1[val1][val2 + 1]);
            my_putchar(LIST1[val1][val2 + 2]);
            return;
        }
        my_putchar(LIST1[val1][val2]);
    }
}

static void write_my_debug_sec(tetris_t *tetris)
{
    my_putchar('\n');
    my_putstr("Key Pause :  ");
    my_putstr(LIST1[5]);
    my_putchar('\n');
    my_putstr("Next :  ");
    my_putstr(LIST1[6]);
    my_putchar('\n');
    my_putstr("Level : ");
    my_putstr(LIST1[7]);
    my_putchar('\n');
    my_putstr("Size :  ");
    write_my_operator(LIST1[8]);
    my_putstr(LIST1[8]);
    my_putchar('\n');
}

void write_my_debug(tetris_t *tetris)
{
    tetris->debug.p_list[0] = "Key Left";
    tetris->debug.p_list[1] = "Key Right";
    tetris->debug.p_list[2] = "Key Turn";
    tetris->debug.p_list[3] = "Key Drop";

    my_putstr("*** DEBUG MODE ***");
    my_putchar('\n');
    for (int i = 0; i < 4; i++) {
        my_putstr(tetris->debug.p_list[i]);
        my_putstr(" : ");
        print_list(tetris, i);
        my_putchar('\n');
    }
    my_putstr("Key Quit :  ");
    my_putstr(LIST1[4]);
    write_my_debug_sec(tetris);
}