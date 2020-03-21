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
    my_putstr("Key Pause :\t");
    my_putstr(LIST3[5]);
    my_putchar('\n');
    my_putstr("Next :\t");
    my_putstr(LIST3[6]);
    my_putchar('\n');
    my_putstr("Level :\t");
    my_putstr(LIST3[7]);
    my_putchar('\n');
    my_putstr("Size :\t");
    my_putstr(LIST3[8]);
    my_putchar('\n');
    my_putstr("Tetriminos :\t");
    my_putstr(LIST3[9]);
    my_putchar('\n');
}

void write_my_debug(tetris_t *tetris)
{
    my_putstr("*** DEBUG MODE ***");
    my_putchar('\n');
    my_putstr("Key Left :\t");
    my_putstr(LIST3[0]);
    my_putchar('\n');
    my_putstr("Key Right :\t");
    my_putstr(LIST3[1]);
    my_putchar('\n');
    my_putstr("Key Turn :\t");
    my_putstr(LIST3[2]);
    my_putchar('\n');
    my_putstr("Key Drop :\t");
    my_putstr(LIST3[3]);
    my_putchar('\n');
    my_putstr("Key Quit :\t");
    my_putstr(LIST3[4]);
    write_my_debug_sec(tetris);
}