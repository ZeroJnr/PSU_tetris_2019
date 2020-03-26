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

    buffer = FILES[y];
    FILES[y] = FILES[y + 1];
    FILES[y + 1] = buffer;
}

void sort_files(tetris_t *tetris)
{
    int y = 0;
    int count = 0;

    while ((count != NB_TETRI) && (y < NB_TETRI - 1)) {
        if (FILES[y][13] > FILES[y + 1][13]) {
            my_swap(tetris, y);
            y = 0;
            count = 0;
        } else if (y + 1 == NB_TETRI - 1) {
            count++;
            y = 0;
            continue;
        }
        count++;
        y++;
    }
}