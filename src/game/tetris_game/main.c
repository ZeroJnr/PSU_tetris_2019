/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "proto_tetris.h"

static int error_handling(int ac)
{
    if (ac < 2) {
        my_putstr("Error in argument\n");
        return (84);
    }
    return 0;
}

int main(int ac, char **av, char **env)
{
    tetris_t tetris = {0};
    bool my_cmd = false;

    open_dir();
    if (error_handling(ac) == 84)
        return 84;
    my_cmd = parsing_param(av, "--help");
    if (debug_mode(av, ac, &tetris, env) == 84)
        return 84;
    if (ac > 1 && my_cmd == true)
        help_mode();
    return (0);
}