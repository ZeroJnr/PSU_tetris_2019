##
## EPITECH PROJECT, 2020
## PSU_bstetris_2019
## File description:
## Makefile
##

SRC_DIR	=	./src/game/
SRC_PARS = ./src/parsing/

SRC	=	$(SRC_PARS)check_tetriminos.c	\
		$(SRC_DIR)getstat.c	\
		$(SRC_DIR)main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

CFLAGS	=	-Wall -Wextra -I include -g

all:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@$(RM) -f $(OBJ)

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all