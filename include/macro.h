/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** macro for tetris project
*/

#ifndef PSU_TETRIS_2019_MACRO_H
#define PSU_TETRIS_2019_MACRO_H
#include "proto_tetris.h"

#define LIST1 tetris->debug.list1
#define LIST1_2 tetris->debug.list1_2
#define LIST2 tetris->debug.list2
#define LIST3 tetris->debug.list3
#define FONT tetris->game.font
#define RAM 2048
#define DIRNAME "./tetriminos/"
#define DIRECTORY tetris->debug.directory
#define FILES tetris->debug.files
#define NB_TETRI tetris->debug.nb_tetri
#define LENGTH (my_lenght(rd->d_name) + my_lenght(DIRNAME))

#endif
