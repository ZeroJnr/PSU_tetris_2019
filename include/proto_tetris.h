/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** proto.h
*/

#ifndef TETRIS
#define TETRIS

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <curses.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "struct.h"

int getstat(char const *filepath);
int main(int ac, char **av);
int check_tetriminos(char *filepath);

#endif