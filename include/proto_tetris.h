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
#include <term.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "struct.h"
#include "proto_lib.h"

int getstat(char const *filepath);
int check_tetriminos(char *filepath);
void test_function(void);
char *parsing_env(char **env, char *path);
int help_mode(void);
bool parsing_param(char **av, char *path);
int set_my_term(tetris_t *tetris, char** env);

#endif