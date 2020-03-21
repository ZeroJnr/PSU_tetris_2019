/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** function who set my term
*/

#include "proto_tetris.h"

int set_my_term(tetris_t *tetris, char** env)
{
    int set = 0;
    int err = 0;

    tetris->debug.my_term = parsing_env(env, "TERM");
    set = setupterm(tetris->debug.my_term, 1, &err);
    if (err <= 0 || set < 0) {
        my_putstr("Error to set your terminal\n");
        return 84;
    }
    printf("Result of setupterm : set=%d, err=%d\n", set, err);
    return 0;
}