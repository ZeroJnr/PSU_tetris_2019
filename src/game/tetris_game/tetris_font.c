/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** adding font tetris in game
*/

#include "proto_tetris.h"

int tetris_font(char *filepath)
{
    int fd = 0;
    size_t size = 0;
    char *buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return 84;
    else if ((size = getstat(filepath)) <= 0)
        return 84;
    if (!(buffer = malloc(sizeof(char) * (size))))
        return (84);
    if (read(fd, buffer, size) <= 0)
        return 84;
    printw(buffer);
    return (0);
}