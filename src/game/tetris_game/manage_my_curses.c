/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** manage_my_curses manage all base function of ncurses library
*/

#include "proto_tetris.h"

static void manage_small_window(void)
{
    WINDOW *wind, *wind2;

    wind = subwin(stdscr, LINES / 2 - 7, COLS / 2 - 7, 0, 0);
    box(wind, ACS_VLINE, ACS_HLINE);
    wind2 = subwin(stdscr, LINES, COLS / 2, 0, 0);
    box(wind2, ACS_VLINE, ACS_HLINE);
}

int manage_my_curses(void)
{
    long col = 0;
    long row = 0;
    WINDOW * test;

    box(stdscr, ACS_VLINE, ACS_HLINE) ;
    getmaxyx(stdscr, row, col) ;
    test = newwin(10, col, 0, 0);
    box(test, ACS_VLINE, ACS_HLINE);
    manage_small_window();
    (void)row;
    return 0;
}
