/*
** EPITECH PROJECT, 2020
** error_tetri.c
** File description:
** error_tetri
*/

#include "proto_tetris.h"

static void disp_error(char *filepath)
{
    my_putstr("Tetriminos : Name ");
    get_name(filepath);
    my_putstr(" : Error\n");
}

static int check_car(char *buffer, char *filepath)
{
    int i = 0;

    for (; buffer[i] != '\n'; ++i);
    i = i + 1;
    for (; buffer[i] != '\0'; ++i) {
        if (CHAR) {
            disp_error(filepath);
            return 84;
        }
    }
    return 0;
}

static int check_cols(char *buffer, char *filepath)
{
    int count = 0;
    int i = 0;

    for (; buffer[i] != '\0'; ++i) {
        if (buffer[i] == '\n')
            count++;
    }
    if (count - 1 != buffer[2] - '0') {
        disp_error(filepath);
        return 84;
    }
    return 0;
}

int error_tetri(char *buffer, char *filepath)
{
    int count = 0;

    for (int i = 0; buffer[i] != '\n'; ++i) {
        if (buffer[i] == ' ')
            count++;
        if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != ' ') {
            disp_error(filepath);
            return 84;
        }
    }
    if (count != 2) {
        disp_error(filepath);
        return 84;
    } else if (check_cols(buffer, filepath) == 84)
        return 84;
    if (check_car(buffer, filepath) == 84)
        return 84;
    return 0;
}