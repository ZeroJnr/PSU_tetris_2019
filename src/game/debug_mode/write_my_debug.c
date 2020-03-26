/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** Twrite_1part of debug mode
*/

#include "proto_tetris.h"

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
    my_putstr(LIST1[8]);
    my_putchar('\n');
}

void write_my_debug(tetris_t *tetris)
{
    my_putstr("*** DEBUG MODE ***");
    my_putchar('\n');
    my_putstr("Key Left :  ");
    my_putstr(LIST1[0]);
    my_putchar('\n');
    my_putstr("Key Right :  ");
    my_putstr(LIST1[1]);
    my_putchar('\n');
    my_putstr("Key Turn :  ");
    my_putstr(LIST1[2]);
    my_putchar('\n');
    my_putstr("Key Drop :  ");
    my_putstr(LIST1[3]);
    my_putchar('\n');
    my_putstr("Key Quit :  ");
    my_putstr(LIST1[4]);
    write_my_debug_sec(tetris);
}