##
## EPITECH PROJECT, 2020
## PSU_bstetris_2019
## File description:
## Makefile
##

SRC_DIR	=	./src/game/
SRC_DEBM = ./src/game/debug_mode/
SRC_TETRIS = ./src/game/tetris_game/
SRC_PARS_DEB = ./src/parsing/parse_debug_mode/
SRC_PARS_TETR = ./src/parsing/parse_tetriminos/
SRC_PARS = ./src/parsing/
LIB_DIR	=	./lib/

SRC	=	$(SRC_PARS_TETR)check_tetriminos.c	\
		$(SRC_PARS_DEB)parsing_param.c	\
		$(SRC_PARS_DEB)pars_env.c   \
		$(SRC_PARS_TETR)sort_file.c \
		$(SRC_PARS_TETR)get_filepath.c  \
		$(SRC_PARS_TETR)display_tetri.c	\
		$(SRC_TETRIS)my_game.c  \
		$(SRC_TETRIS)tetris_font.c  \
		$(SRC_TETRIS)manage_my_curses.c \
		$(SRC_TETRIS)create_my_game_map.c   \
		$(SRC_DEBM)help_mode.c   \
		$(SRC_DEBM)set_my_term.c    \
		$(SRC_DEBM)find_my_cmd.c    \
		$(SRC_DEBM)write_my_debug.c \
		$(SRC_DEBM)fill_my_list.c   \
		$(SRC_DEBM)debug_mode.c     \
		$(SRC_DEBM)my_allocation.c  \
		$(SRC_DEBM)manage_my_arg.c  \
		$(SRC_DEBM)get_end.c    \

SRC_BUILD   =   $(SRC) $(SRC_TETRIS)main.c \

NAME	=	tetris

CFLAGS	=	-lncurses -Wall -Wextra -Werror -I./include/ -I./lib/

OBJ	=	$(SRC_BUILD:.c=.o)

OBJ_TESTS	=	$(SRC:.c=.o)

all:	$(OBJ)
	make -C $(LIB_DIR)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L $(LIB_DIR) -lmy

debug: CFLAGS += -g
debug: re

clean:
	@$(RM) -f $(OBJ)
	@rm -f $(LIB_DIR)*.o

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all