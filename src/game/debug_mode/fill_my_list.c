/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** fill my_list LIST1 LIST2 LIST3
*/

#include "proto_tetris.h"

static void catch_my_key(tetris_t *tetris)
{
    for (int i = 0; i < 4; i++)
        LIST1[i] = my_strdup(tigetstr(LIST1[i]));
}

void fill_default_list(tetris_t *tetris)
{
    LIST1[0] = "kcub1";
    LIST1[1] = "kcuf1";
    LIST1[2] = "kcuu1";
    LIST1[3] = "kcud1";
    LIST1[4] = "q";
    LIST1[5] = "(space)";
    LIST1[6] = "Yes";
    LIST1[7] = "1";
    LIST1[8] = "20*10";
    LIST1[9] = "false";
    catch_my_key(tetris);
}