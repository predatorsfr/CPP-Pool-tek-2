##
## EPITECH PROJECT, 2017
## makefile
## File description:
##
##

SRC	=	main.cpp \

OBJ	=	$(SRC:.cpp=.o)

CC	=	g++ -Wall -Wextra -Werror

NAME	=	my_cat

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f include/*~

re:		fclean all

.PHONY :	all clean fclean re
