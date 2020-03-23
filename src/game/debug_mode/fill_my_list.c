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

void fill_my_list_sec(tetris_t *tetris)
{
    LIST2[0] = "^EOD";
    LIST2[1] = "^EOC";
    LIST2[2] = "^EOA";
    LIST2[3] = "^EOB";
    LIST2[4] = "q";
    LIST2[5] = "(space)";
    LIST2[6] = "Yes";
    LIST2[7] = "1";
    LIST2[8] = "20*10";
}