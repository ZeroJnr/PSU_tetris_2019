/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** create my_game_map
*/

#include "proto_tetris.h"

void create_my_game_map(void)
{
    WINDOW *map;
    map = subwin(stdscr, 37, 58, 2, 65);
    wborder(map, '|', '|', '-', '-', '+', '+', '+', '+');
    mvprintw(3, 67, "GAME : PRESS ANY KEY TO START\n");
}