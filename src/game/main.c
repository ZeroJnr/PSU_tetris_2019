/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "proto_tetris.h"

int main(int ac, char **av)
{
    tetris_t tetris = {0};

    if (ac < 2)
        return (84);
    check_tetriminos(av[1]);
    return (0);
}