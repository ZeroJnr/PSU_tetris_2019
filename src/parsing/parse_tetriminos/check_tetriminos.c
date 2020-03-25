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
        my_putchar(filepath[i]);
}

static int check_fake(char *buffer, char *filepath)
{
    for (int i = 0; buffer[i] != '\n'; ++i) {
        if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != ' ') {
            my_putstr("Tetriminos :  Name ");
            get_name(filepath);
            my_putstr(" :  Error\n");
            return 84;
        }
    }
    return 0;
}

static void display(char *filepath, char *buffer, int size)
{
    my_putstr("Tetriminos :  Name ");
    get_name(filepath);
    my_putstr(" :  Size ");
    my_putchar(buffer[0]);
    my_putchar('*');
    my_putchar(buffer[2]);
    my_putstr(" :  Color ");
    my_putchar(buffer[4]);
    my_putstr(" :\n");
    for (int i = 6; i < size; i++) {
        my_putchar(buffer[i]);
    }
    my_putchar('\n');
}

static int check_tetriminos(char *filepath)
{
    int fd = 0;
    size_t size = 0;
    char *buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return 84;
    if ((size = getstat(filepath)) <= 0)
        return 84;
    if (!(buffer = malloc(sizeof(char) * (size + 1))))
        return (84);
    else if (read(fd, buffer, size) <= 0)
        return 84;
    if (check_fake(buffer, filepath) == 84)
        return -1;
    display(filepath, buffer, size);
    close(fd);
    free(buffer);
    return (0);
}

int call_check(tetris_t *tetris)
{
    for (int i = 0; i != NB_TETRI; i++) {
        if (check_tetriminos(FILES[i]) == 84)
            return 84;
    }
    my_putstr("Press any key to start Tetris\n");
    return 0;
}