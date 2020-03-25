/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** sort files for displaying order
*/

#include "proto_tetris.h"

static void my_swap(tetris_t *tetris, int y)
{
    char *buffer = NULL;

    buffer = FILES[1];
    FILES[y] = FILES[y + 1];
    FILES[y + 1] = buffer;
}

void sort_files(tetris_t *tetris)
{
    for (int y = 0; y < NB_TETRI - 1; y++) {
        if (FILES[y][13] > FILES[y + 1][13]) {
            my_swap(tetris, y);
            y = 0;
        }
    }
}