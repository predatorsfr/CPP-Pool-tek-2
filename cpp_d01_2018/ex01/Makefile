##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	menger.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -Wall -Wextra -std=gnu11 -lm

NAME	=	menger

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f lib/my/*~

re:		fclean all

.PHONY : 	all clean fclean re
