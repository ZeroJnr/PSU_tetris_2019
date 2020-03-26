/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** help mode
*/

#include "proto_tetris.h"

static void print_bin(char *binary)
{
    my_putstr("Usage: ");
    my_putstr(binary);
    my_putstr(" [options]\n");
}

static int my_cat(int byte, char *filepath, char *binary)
{
    char *buffer = malloc(sizeof(char) * byte + 1);
    int rd = 0;
    int fd = open(filepath, O_RDONLY);

    if (fd <= 0) {
        my_putstr("Open failed\n");
        return 84;
    }
    rd = read(fd, buffer, byte);
    if (rd <= 0) {
        my_putstr("Read failed\n");
        return 84;
    }
    print_bin(binary);
    write(1, buffer, byte);
    my_putchar('\n');
    return 0;
}

int help_mode(char **av, int return_value)
{
    int size = getstat("./src/help.txt");
    if (my_cat(size, "./src/help.txt", av[0]) == 84)
        return 84;
    if (return_value == 84)
        exit(84);
    return return_value;
}

