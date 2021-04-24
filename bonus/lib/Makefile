##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Rush2
##

SRC	=	srcs/infin_add.c		\
		srcs/main.c			\

CC	=	gcc -o

T_SRC	=	srcs/infin_add.c		\
		test/infin_test.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror  -I./include/ -L./lib/my -lmy

NAME	=	infin_add

T_NAME	=	unit_test

TFLAGS	=	-lcriterion -I./include/ -L./lib/my -lmy --coverage

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "\e[44;1m----------------THATS WORK !!!----------------\e[0m"

test_run:
	make -C lib/my
	$(CC) $(T_NAME) $(T_SRC) $(TFLAGS)
	./unit_test

clean:
	make clean -C lib/my
	rm -rf $(OBJ)
	rm -rf *.gcno
	rm -rf *.gcda

fclean:	clean
	make fclean -C lib/my
	rm -rf $(NAME)
	rm -rf $(T_NAME)

re:	fclean all

.PHONY:	all clean fclean re test_run
