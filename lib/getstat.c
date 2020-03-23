/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** getsize
*/

#include "proto.h"

int getstat(char const *filepath)
{
    struct stat buf = {0};

    stat(filepath, &buf);
    return (buf.st_size);
}