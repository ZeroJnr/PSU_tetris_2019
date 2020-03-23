/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** debug_mode
*/

#include "proto_tetris.h"

static int error_handling_sec(int ac)
{
    if (ac % 2 != 0) {
        my_putstr("Error you have invalid argument\n");
        return 84;
    }
    return 0;
}

int debug_mode(char **av, int ac, tetris_t *tetris, char **env)
{
    if (parsing_param(av, "-D") == true) {
        if (error_handling_sec(ac) == 84)
            return 84;
        if (ac >= 2 && (parsing_param(av, "--help") != true)) {
            if (set_my_term(tetris, env) == 84) {
                return 84;
            }
            find_my_cmd(tetris, av, ac);
            write_my_debug(tetris);
            open_dir();
        }
    }
    return 0;
}