/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** fill my_list LIST1 LIST2 LIST3
*/

#include "proto_tetris.h"

static void catch_my_key(tetris_t *tetris)
{
    for (int i = 0; i < 4; i++) {
        LIST1[i] = tigetstr(LIST1[i]);
        if ((my_strncmp(LIST1[i], "\eOD", my_lenght(LIST1[i]))) == 0)
            LIST1[i] = "^EOD";
        if (my_strncmp(LIST1[i], "\eOC", my_lenght(LIST1[i])) == 0)
            LIST1[i] = "^EOC";
        else if (my_strncmp(LIST1[i], "\eOA", my_lenght(LIST1[i])) == 0)
            LIST1[i] = "^EOA";
        else if (my_strncmp(LIST1[i], "\eOB", my_lenght(LIST1[i])) == 0)
            LIST1[i] = "^EOB";
    }
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
    catch_my_key(tetris);
}