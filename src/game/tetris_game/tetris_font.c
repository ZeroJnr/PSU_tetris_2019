/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** adding font tetris in game
*/

#include "proto_tetris.h"

static void init_my_pair_color(void)
{
    init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_RED, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
}

static void draw_font(tetris_t *tetris)
{
    int i = 10;
    long j = 10;
    int idx = 1;

    start_color();
    init_my_pair_color();
    for (int y = 0; y < 6; y++) {
        attron(COLOR_PAIR(idx));
        mvprintw(j - 8, i - 6, FONT[y]);
        attroff(COLOR_PAIR(idx));
        j += 1;
        idx++;
    }
}

int tetris_font(char *filepath, tetris_t *tetris)
{
    int fd = 0;
    size_t size = 0;
    char *buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return 84;
    else if ((size = getstat(filepath)) <= 0)
        return 84;
    if (!(buffer = malloc(sizeof(char) * (size))))
        return (84);
    if (read(fd, buffer, size) <= 0)
        return 84;
    FONT = str_to_word_array(buffer);
    draw_font(tetris);
    return (0);
}