/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "proto_tetris.h"

int main(int ac, char **av, char **env)
{
    tetris_t tetris = {0};
    int my_cmd = 0;

    if (ac < 2) {
        my_putstr("Error in argument\n");
        return (84);
    }
    my_cmd = parsing_param(av, "--help");
    if (ac > 1 && my_cmd == true)
        help_mode();
    if (ac >= 2 && my_cmd != true) {
        if (set_my_term(&tetris, env) == 84)
            return 84;
        find_my_cmd(&tetris, av, ac);
        write_my_debug(&tetris);
    }
    return (0);
}