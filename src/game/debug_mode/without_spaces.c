/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** without spaces
*/

#include "proto_tetris.h"

static void too_long_lenght(tetris_t *tetris)
{
    for (int j = 0; AV[j]; j++) {
        for (int i = 0; AV[j][i]; i++) {
            if (AV[j][i] == '-' && AV[j][i + 1] != 'D' && my_lenght(AV[j]) <= 2\
            && AV[j][i + 2] != '=') {
                j += 1;
                if (my_lenght(AV[j]) >= 2)
                    help_mode(AV, 84);
            }
        }
    }
}

static void check_after_equal2(tetris_t *tetris)
{
    for (int j = 0; AV[j]; j++) {
        for (int i = 0; AV[j][i]; i++) {
            if (AV[j][i] == '-') {
                if (AV[j][i + 1] != '-' && AV[j][i + 2] == '=')
                    help_mode(AV, 84);
            }
        }
    }
}

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
                if (AV[j][i + 1] == '\0' || AV[j][i + 2] != '\0')
                    help_mode(AV, 84);
            }
        }
    }
    check_after_equal2(tetris);
    too_long_lenght(tetris);
}
