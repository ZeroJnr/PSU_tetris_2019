/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** debug_mode
*/

#include "proto_tetris.h"

static bool check_equal_flags(tetris_t *tetris)
{
    for (int i = 0; AV[i]; i++) {
        if (AV[i][0] == '-') {
            if (AV[i][2] == '=')
                return true;
        }
    }
    return false;
}

static void check_flags(tetris_t *tetris)
{
    if (AC > 1 && parsing_param(AV, "-") == 0)
        help_mode(AV, 84);
    else if (check_equal_flags(tetris) == true)
        help_mode(AV, 84);
    else
        my_game(tetris);
}

int debug_mode(tetris_t *tetris, char **env)
{
    if (set_my_term(tetris, env) == 84)
        return 84;
    my_allocation(tetris);
    space_after_equal(tetris);
    manage_my_arg(tetris);
    if (my_strncmp(LIST1[6], "true", my_lenght(LIST1[6])) == 0)
        LIST1[6] = "No";
    if (my_strncmp(LIST1[9], "true", my_lenght(LIST1[9])) == 0) {
        without_spaces(tetris);
        write_my_debug(tetris);
        get_filepath(tetris);
        call_check(tetris);
        get_end(tetris);
    } else
        check_flags(tetris);
    return 0;
}