/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** parsing environement
*/

#include "proto_tetris.h"

char *parsing_env(char **env, char *path)
{
    char *buffer = NULL;
    int counter = 0;

    for (int y = 0; env[y]; y++) {
        counter = my_strncmp(env[y], path, my_lenght(path));
        if (counter == 0) {
            buffer = my_strdup(env[y] + 5);
        }
    }
    return buffer;
}