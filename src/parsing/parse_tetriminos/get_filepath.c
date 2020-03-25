/*
** EPITECH PROJECT, 2020
** get_filepath.c
** File description:
** get tetriminos filepath
*/

#include "proto_tetris.h"

static int read_directory(tetris_t *tetris)
{
    int x = 0;
    struct dirent *rd;

    if ((DIRECTORY = opendir(DIRNAME)) == NULL)
        return 84;
    while ((rd = readdir(DIRECTORY)) != NULL) {
        if (rd->d_name[0] == '.')
            continue;
        if (!(FILES[x] = malloc(sizeof(char) * LENGTH)))
            return 84;
        FILES[x] = my_strcat(DIRNAME, rd->d_name);
        x++;
    }
    free(rd);
    return 0;

}

static int file_alloc(tetris_t *tetris)
{
    if (!(FILES = malloc(sizeof(char *) * (NB_TETRI))))
        return 84;
    return 0;
}

static void get_nb_tetri(tetris_t *tetris)
{
    struct dirent *rd;

    while ((rd = readdir(DIRECTORY)) != NULL) {
        if (rd->d_name[0] == '.')
            continue;
        NB_TETRI++;
    }
    my_putstr("Tetriminos :  ");
    my_putchar(NB_TETRI + '0');
    my_putchar('\n');
    free(rd);
}

int get_filepath(tetris_t *tetris)
{
    if ((DIRECTORY = opendir(DIRNAME)) == NULL)
        return 84;
    get_nb_tetri(tetris);
    if (file_alloc(tetris) == 84)
        return 84;
    else if (read_directory(tetris) == 84)
        return 84;
    sort_files(tetris);
    return 0;
}