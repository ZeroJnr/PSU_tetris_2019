/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** help mode
*/

#include "proto_tetris.h"

static int my_cat(int byte, char *filepath)
{
    char *buffer = malloc(sizeof(char) * byte);
    int fd = open(filepath, O_RDONLY);
    if (fd <= 0) {
        my_putstr("Open failed\n");
        return 84;
    }
    int rd = read(fd, buffer, byte);
    if (rd <= 0) {
        my_putstr("Read failed\n");
        return 84;
    }
    my_putstr(buffer);
    my_putchar('\n');
    return 0;
}

int help_mode(void)
{
    int size = getstat("./src/help.txt");
    if (my_cat(size, "./src/help.txt") == 84)
        return 84;
    return 0;
}
