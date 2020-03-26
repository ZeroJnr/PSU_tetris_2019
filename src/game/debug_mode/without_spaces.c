/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** without spaces
*/

#include "proto_tetris.h"

void without_spaces(tetris_t *tetris)
{
    for (int i = 0; i < 7; i++) {
        if (my_strncmp(LIST1[i], " ", my_lenght(LIST1[i])) == 0)
            LIST1[i] = "(space)";
    }
}