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

void space_after_equal(tetris_t *tetris)
{
    for (int j = 0; AV[j]; j++) {
        for (int i = 0; AV[j][i]; i++) {
            if (AV[j][i] == '=') {
                if (AV[j][i + 1] == '\0')
                    help_mode(AV, 84);
            }
        }
    }
}