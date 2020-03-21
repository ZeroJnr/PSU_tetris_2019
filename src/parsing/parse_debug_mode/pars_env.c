/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** parsing environement
*/

#include "proto_tetris.h"

static char *correct_buffer(char *buffer)
{
    char *full_buffer = malloc(sizeof(char) * my_lenght(buffer));

    for (int i = 0; buffer[i] != '-'; i++)
        full_buffer[i] = buffer[i];
    return full_buffer;
}

char *parsing_env(char **env, char *path)
{
    char *buffer = NULL;
    int counter = 0;

    for (int y = 0; env[y]; y++) {
        counter = my_strncmp(env[y], path, my_lenght(path));
        if (counter == 0) {
            buffer = env[y] + 5;
        }
    }
    buffer = correct_buffer(buffer);
    return buffer;
}