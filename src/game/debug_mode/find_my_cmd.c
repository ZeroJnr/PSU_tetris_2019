/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** find command to launch tetris game
*/

#include "proto_tetris.h"

void catch_arg_flags(tetris_t *tetris, struct option *long_options)
{
    int opt = 0;
    int opt_idx = 0;

    while ((opt = getopt_long(AC, AV, "hL:l:r:t:d:q:p:X:wD", long_options, \
    &opt_idx)) != -1) {
        opt == 'h' ? help_mode(AV, 0) : 1;
        opt == 'l' ? (LIST1[0] = optarg) : "1";
        opt == 'r' ? (LIST1[1] = optarg) : "1";
        opt == 't' ? (LIST1[2] = optarg) : "1";
        opt == 'd' ? (LIST1[3] = optarg) : "1";
        opt == 'q' ? (LIST1[4] = optarg) : "1";
        opt == 'p' ? (LIST1[5] = optarg) : "1";
        opt == 'w' ? (LIST1[6] = "true") : "1";
        opt == 'L' ? (LIST1[7] = optarg) : "1";
        opt == 'x' ? (LIST1[8] = optarg) : "1";
        opt == 'D' ? (LIST1[9] = "true") : "1";
        opt == '?' ? help_mode(AV, 84) : 1;
    }
}