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
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <curses.h>
#include <term.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "struct.h"
#include "proto_lib.h"
#include "macro.h"

void test_function(void);
char *parsing_env(char **env, char *path);
int help_mode(char **av, int return_value);
bool parsing_param(char **av, char *path);
int set_my_term(tetris_t *tetris, char **env);
void my_allocation(tetris_t *tetris);
void write_my_debug(tetris_t *tetris);
void fill_default_list(tetris_t *tetris);
int debug_mode(tetris_t *tetris, char **env);
int open_dir(void);
int my_game(tetris_t *tetris);
int tetris_font(char *filepath, tetris_t *tetris);
int manage_my_curses(void);
void create_my_game_map(void);
void get_end(tetris_t *tetris);
int get_filepath(tetris_t *tetris);
int call_check(tetris_t *tetris);
void sort_files(tetris_t *tetris);
void display(char *filepath, char *buffer, int size);
void get_name(char *filepath);
void catch_arg_flags(tetris_t *tetris, struct option *long_options);
void manage_my_arg(tetris_t *tetris);
void without_spaces(tetris_t *tetris);

#endif