/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** manage_my_curses manage all base function of ncurses library
*/

#include "proto_tetris.h"

int manage_my_curses(void)
{
    WINDOW *boite;

    boite = subwin(stdscr, 10, 10, LINES / 2, COLS / 2);
    box(boite, ACS_VLINE, ACS_HLINE);
    return 0;
}
