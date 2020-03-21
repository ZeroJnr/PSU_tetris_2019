/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** find command to launch tetris game
*/

#include "proto_tetris.h"

static char *check_buffer_spaces(char *buffer)
{
    char *new_buf = NULL;

    if (my_strncmp(buffer, " ", my_lenght(buffer)) == 0)
        new_buf = "(space)";
    else
        new_buf = buffer;
    return new_buf;
}

static char *check_my_quote(char **av, int ac, char *str)
{
    (void)ac;
    int j = 0;
    char *buffer = NULL;

    while (my_strncmp(av[j], str, my_lenght(av[j])) != 0)
        j++;
    buffer = av[j + 1];
    buffer = check_buffer_spaces(buffer);
    return buffer;
}

int find_my_cmd(tetris_t *tetris, char **av, int ac)
{
    char *buffer = NULL;
    int i = 0;

    my_allocation(tetris);
    fill_my_list_one_2(tetris);
    fill_my_list(tetris);
    fill_my_list_sec(tetris);
    while (i < 10) {
        if (parsing_param(av, LIST1[i]) == true) {
            buffer = check_my_quote(av, ac, LIST1[i]);
            LIST3[i] = buffer;
        }
        else if (parsing_param(av, LIST1_2[i]) == true) {
            buffer = check_my_quote(av, ac, LIST1_2[i]);
            LIST3[i] = buffer;
        }
        else
            LIST3[i] = LIST2[i];
        i++;
    }
    return 0;
}