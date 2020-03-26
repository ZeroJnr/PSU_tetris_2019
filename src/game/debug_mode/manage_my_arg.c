/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** manage debug mode and his argument
*/

#include "proto_tetris.h"

void manage_my_arg(tetris_t *tetris)
{
    fill_default_list(tetris);
    static struct option long_options[] = {
        {"help", no_argument, 0, 'h'},
        {"level", required_argument, 0, 'L'},
        {"key-left", required_argument, 0, 'l'},
        {"key-right", required_argument, 0, 'r'},
        {"key-turn", required_argument, 0, 't'},
        {"key-drop", required_argument, 0, 'd'},
        {"key-quit", required_argument, 0, 'q'},
        {"key-pause", required_argument, 0, 'p'},
        {"map-size", required_argument, 0, 'x'},
        {"without-next", no_argument, 0, 'w'},
        {"debug", no_argument, 0, 'D'},
        {0, 0, 0, 0}
    };
    catch_arg_flags(tetris, long_options);
}
