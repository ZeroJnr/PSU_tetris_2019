##
## EPITECH PROJECT, 2020
## PSU_bstetris_2019
## File description:
## Makefile
##

SRC_DIR	=	./src/game/
SRC_PARS = ./src/parsing/
LIB_DIR	=	./lib/

SRC	=	$(SRC_PARS)check_tetriminos.c	\
		$(SRC_PARS)parsing_param.c	\
		$(SRC_PARS)getstat.c	\
		$(SRC_DIR)main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CFLAGS	=	-Wall -Wextra -I./include/ -I./lib/

all:	$(OBJ)
	make -C $(LIB_DIR)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) -L $(LIB_DIR) -lmy

clean:
	@$(RM) -f $(OBJ)

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all