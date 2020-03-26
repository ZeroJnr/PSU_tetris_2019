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
    bool my_cmd = false;

    main_game(ac, &tetris);
    my_cmd = parsing_param(av, "--help");
    if (ac > 1 && my_cmd == true) {
        help_mode(av);
        return 0;
    }
    if (debug_mode(av, ac, &tetris, env) == 84) {
        return 84;
    }
    get_end(&tetris);
    return (0);
}