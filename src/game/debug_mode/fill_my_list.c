/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** fill my_list LIST1 LIST2 LIST3
*/

#include "proto_tetris.h"

void fill_my_list(tetris_t *tetris)
{
    LIST1[0] = "-l";
    LIST1[1] = "-r";
    LIST1[2] = "-t";
    LIST1[3] = "-d";
    LIST1[4] = "-q";
    LIST1[5] = "-p";
    LIST1[6] = "-w";
    LIST1[7] = "-L";
    LIST1[8] = "--map-size";
}

void fill_my_list_one_2(tetris_t *tetris)
{
    LIST1_2[0] = "--key-left=";
    LIST1_2[1] = "--key-right=";
    LIST1_2[2] = "--key-turn=";
    LIST1_2[3] = "--key-drop=";
    LIST1_2[4] = "--key-quit=";
    LIST1_2[5] = "--key-pause=";
    LIST1_2[6] = "--without-next=";
    LIST1_2[7] = "--level=";
    LIST1_2[8] = "--map-size=";
}

static void loop_teget(tetris_t *tetris)
{
    for (int i = 0; i < 4; i++) {
        LIST2[i] = tigetstr(LIST2[i]);
        if ((my_strncmp(LIST2[i], "\eOD", my_lenght(LIST2[i]))) == 0)
            LIST2[i] = "^EOD";
        if (my_strncmp(LIST2[i], "\eOC", my_lenght(LIST2[i])) == 0)
            LIST2[i] = "^EOC";
        else if (my_strncmp(LIST2[i], "\eOA", my_lenght(LIST2[i])) == 0)
            LIST2[i] = "^EOA";
        else if (my_strncmp(LIST2[i], "\eOB", my_lenght(LIST2[i])) == 0)
            LIST2[i] = "^EOB";
    }
}

void fill_my_list_sec(tetris_t *tetris)
{
    LIST2[0] = "kcub1";
    LIST2[1] = "kcuf1";
    LIST2[2] = "kcuu1";
    LIST2[3] = "kcud1";
    LIST2[4] = "q";
    LIST2[5] = "(space)";
    LIST2[6] = "Yes";
    LIST2[7] = "1";
    LIST2[8] = "20*10";
    loop_teget(tetris);
}