/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** help mode
*/

#include "proto_tetris.h"

static void print_bin(char *binary)
{
    my_putstr("Usage: ");
    my_putstr(binary);
    my_putstr(" [options]\n");
}

static void my_cat(char *binary)
{
    print_bin(binary);
    my_putstr("Options:\n");
    my_putstr(" --help\t\t\tDisplay this help\n");
    my_putstr(" -L --level={num}\tStart Tetris at level num (def: 1)\n -l");
    my_putstr(" --key-left={K}\tMove the tetrimino LEFT using the K key ");
    my_putstr("(def: left arrow)\n -r --key-right={K}\tMove the tetrimino");
    my_putstr(" right using the K key (def: right arrow)\n -t --key-turn=");
    my_putstr("{K}\tTURN the tetrimino clockwise 90d using the K key (def");
    my_putstr(": top arrow)\n -d --key-drop={K}\tDROP the tetrimino using");
    my_putstr(" the K key (def: down arrow)\n -q --key-quit={K}\tQUIT the");
    my_putstr(" game using the K key (def: 'q' key)\n -p --key-pause={K}");
    my_putstr("\tPAUSE/RESTART the game using the K key (def: space bar)");
    my_putstr("\n --map-size={row,col}\tSet the numbers of rows and colum");
    my_putstr("ns of the map (def: 20,10)\n -w --without-next\tHide next ");
    my_putstr("tetrimino (def: false)\n -D --debug\t\tDebug mode (def: ");
    my_putstr("false)\n");
}

int help_mode(char **av, int return_value)
{
    my_cat(av[0]);
    exit(return_value);
    return return_value;
}

