/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** parsing_param
*/

#include "proto_tetris.h"

bool parsing_param(char **av, char *path)
{
    int counter = 0;
    bool check = false;

    for (int y = 0; av[y]; y++) {
        counter = my_strncmp(av[y], path, my_lenght(path));
        if (counter == 0) {
            check = true;
        }
    }
    return check;
}