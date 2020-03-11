/*
** EPITECH PROJECT, 2020
** headers
** File description:
** check_tetriminos
*/

#include "proto_tetris.h"

void display(char *filepath, char *buffer)
{
    my_putstr("Tetriminos : Name ");
    write(1, &filepath[1], 1);
    my_putstr(" : Size ");
    write(1, &buffer[0], 1);
    
    write(1, &buffer[2], 1);
}

int check_tetriminos(char *filepath)
{
    int fd = 0;
    size_t size = 0;
    ssize_t i = 0;
    char **buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return (84);
    else if ((size = getstat(filepath)) <= 0)
        return(84);
    buffer = malloc(sizeof(char) * (size));
    if (read(fd, &buffer, size) <= 0)
        return (84);
    display(filepath, buffer);
    return (0);
}