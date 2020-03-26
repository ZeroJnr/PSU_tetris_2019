/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "proto_tetris.h"

static int main_game(int ac, tetris_t *tetris)
{
    if (ac < 2) {
        my_game(tetris);
        exit(0);
    }
    return 0;
}

int main(int ac, char **av, char **env)
{
    tetris_t tetris = {0};
    tetris.argument.av = av;
    tetris.argument.ac = ac;

    main_game(ac, &tetris);
    if (debug_mode(&tetris, env) == 84)
        return 84;
    return (0);
}