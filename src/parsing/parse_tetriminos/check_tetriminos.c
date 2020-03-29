/*
** EPITECH PROJECT, 2020
** headers
** File description:
** check_tetriminos
*/

#include "proto_tetris.h"

static void end(int fd, char *buffer)
{
    close(fd);
    free(buffer);
}

static int operat_tetri(char *buffer, char *filepath, int fd, int size)
{
    buffer[size] = '\0';
    if (error_tetri(buffer, filepath) == 84) {
        end(fd, buffer);
        return -1;
    }
    display(filepath, buffer, size);
    end(fd, buffer);
    return 0;
}

static int check_tetriminos(char *filepath)
{
    int fd = 0;
    int size = 0;
    char *buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return 84;
    else if ((size = getstat(filepath)) <= 0) {
        close(fd);
        return -1;
    }
    if (!(buffer = malloc(sizeof(char) * (size + 1)))) {
        close(fd);
        return 84;
    } else if (read(fd, buffer, size) <= 0) {
        end(fd, buffer);
        return 84;
    }
    if (operat_tetri(buffer, filepath, fd, size) < 0)
        return -1;
    return 0;
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