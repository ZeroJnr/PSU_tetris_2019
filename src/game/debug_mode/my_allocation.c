/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my_allocation to malloc double list
*/

#include "proto_tetris.h"

static char **allocate(char **alloc)
{
    alloc = malloc(sizeof(char *) * RAM);
    if (!alloc) {
        my_putstr("Error : malloc failed\n");
        return NULL;
    }
    for (int i = 0; i < 11; i++) {
        alloc[i] = malloc(sizeof(char) * RAM);
        if (!alloc[i]) {
            my_putstr("Error : malloc failed\n");
            return NULL;
        }
    }
    return alloc;
}

void my_allocation(tetris_t *tetris)
{
    LIST1 = allocate(LIST1);
    LIST1_2 = allocate(LIST1_2);
    LIST2 = allocate(LIST2);
    LIST3 = allocate(LIST3);
    FONT = allocate(FONT);
}
