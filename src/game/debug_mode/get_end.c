/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** getline at the end of the project
*/

#include "proto_tetris.h"

void get_end(tetris_t *tetris)
{
    size_t n = 0;
    ssize_t rd = 0;
    char *buffer = NULL;

    rd = getline(&buffer, &n, stdin);
    if (rd < 0) {
        my_putstr("Error with the getline\n");
        exit(84);
    }
    my_game(tetris);
}