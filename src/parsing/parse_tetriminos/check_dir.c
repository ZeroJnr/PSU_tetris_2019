/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** check and open directory
*/

#include "proto_tetris.h"

static void get_nb(DIR *dir)
{
    int i = 0;
    struct dirent *read_direct;

    while ((read_direct = readdir(dir))) {
        if (read_direct->d_name[0] == '.')
            continue;
        ++i;
    }
    my_putchar(i + '0');
    my_putchar('\n');
}

int open_dir(void)
{
    char *dirname = "./tetriminos/";
    DIR *dir;
    struct dirent *read_dir;
    char *file = NULL;

    if ((dir = opendir(dirname)) == NULL)
        return (84);
    my_putstr("Tetriminos :  ");
    get_nb(dir);
    if ((dir = opendir(dirname)) == NULL)
        return (84);
    while ((read_dir = readdir(dir))) {
        if (read_dir->d_name[0] == '.')
            continue;
        file = my_strcat(dirname, read_dir->d_name);
        check_tetriminos(file);
    }
    my_putstr("Press any key to start Tetris\n");
    return 0;
}