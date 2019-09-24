##
## EPITECH PROJECT, 2017
## makefile
## File description:
##
##

SRC	=	init.c \
		assign.c \
		append.c \
		other.c \
		compare.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	libstring.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~

re:		fclean all

.PHONY :	all clean fclean re
