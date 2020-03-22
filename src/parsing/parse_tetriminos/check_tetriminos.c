/*
** EPITECH PROJECT, 2020
** headers
** File description:
** check_tetriminos
*/

#include "proto_tetris.h"

static void get_name(char *filepath)
{
    for (int i = 13; filepath[i] != '.'; i++)
        write(1, &filepath[i], 1);
}

static bool check_fake(char *buffer, char *filepath)
{
    for (int i = 0; buffer[i] != '\n'; ++i) {
        if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != ' ') {
            my_putstr("Tetriminos : Name ");
            get_name(filepath);
            my_putstr(" : Error\n");
            return true;
        }
    }
    return false;
}

static void display(char *filepath, char *buffer)
{
    my_putstr("Tetriminos : Name ");
    get_name(filepath);
    my_putstr(" :  Size ");
    write(1, &buffer[0], 1);
    my_putchar('*');
    write(1, &buffer[2], 1);
    my_putstr(" :  Color ");
    write(1, &buffer[4], 1);
    my_putstr(" :\n");
    for (int i = 6; buffer[i] != '\0'; i++) {
        write(1, &buffer[i], 1);
    }
}

int check_tetriminos(char *filepath)
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
    if (check_fake(buffer, filepath) == true)
        return 84;
    display(filepath, buffer);
    return (0);
}