/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my tetris game
*/

#include "proto_tetris.h"

static void init_game(void)
{
    initscr();
    keypad(stdscr, TRUE);
    cbreak();
    noecho();
    curs_set(FALSE);
}

static void final_game(void)
{
    refresh();
    getch();
    endwin();
}

int my_game(tetris_t *tetris)
{
    (void)tetris;
    init_game();
    manage_my_curses();
    tetris_font("tetris_font.txt");
    final_game();
    return 0;
}