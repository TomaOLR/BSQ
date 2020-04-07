##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Rush2
##

SRC	=	srcs/bsq.c		\
		srcs/bsq_187.c		\
		srcs/algo.c		\
		srcs/stat.c		\
		srcs/main.c		\

CC	=	gcc -o

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror  -I./include/ -L./lib/my -lmy

NAME	=	bsq

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

fclean:	clean
	make fclean -C lib/my
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re test_run
