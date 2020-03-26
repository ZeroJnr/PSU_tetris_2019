/*
** EPITECH PROJECT, 2020
** display_tetri.c
** File description:
** display_tetri
*/

#include "proto_tetris.h"

void get_name(char *filepath)
{
    for (int i = 13; filepath[i] != '.'; i++)
        my_putchar(filepath[i]);
}

void display(char *filepath, char *buffer, int size)
{
    int i = 6;

    my_putstr("Tetriminos : Name ");
    get_name(filepath);
    my_putstr(" : Size ");
    my_putchar(buffer[0]);
    my_putchar('*');
    my_putchar(buffer[2]);
    my_putstr(" : Color ");
    my_putchar(buffer[4]);
    my_putstr(" :\n");
    for (; i < size; i++) {
        my_putchar(buffer[i]);
    }
    if (buffer[i - 1] != '\n')
        my_putchar('\n');
}