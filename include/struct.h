/*
** EPITECH PROJECT, 2020
** struct.h
** File description:
** structure for tetris game
*/

#ifndef STRUCT_TETRIS
#define STRUCT_TETRIS

typedef struct debug debug_t;
typedef struct game game_t;
typedef struct argument argument_t;
typedef struct tetris tetris_t;

struct debug
{
    int i;
    int j;
    DIR *directory;
    char **files;
    int nb_tetri;
    char *my_term;
    char **list1;
    char **p_list;
};

struct argument
{
    int ac;
    char **av;
};

struct game
{
    char **font;
};

struct tetris
{
    debug_t debug;
    argument_t argument;
    game_t game;
};

#endif
