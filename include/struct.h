/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** structure for tetris game
*/

#ifndef STRUCT_TETRIS
#define STRUCT_TETRIS

typedef struct debug debug_t;
typedef struct tetris tetris_t;

struct debug
{
    int i;
    int j;
    char *my_term;
    char **list1_2;
    char **list1;
    char **list2;
    char **list3;
};

struct tetris
{
    debug_t debug;
};

#endif
