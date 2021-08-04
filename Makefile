SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

UNAME_S = $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	CFLAGS := -Wall -Wextra -Werror -fPIE
else
	CFLAGS := -Wall -Wextra -Werror
endif

SRC_PATH = ./src

SRC_NAME =	main.c check.c sort.c\
			swap.c push.c rotate.c\
			reverse_rotate.c radix.c\
			case.c small_sort.c\

LIBFT = ./libft/libft.a

LIB = cd ./libft; make; cd ..;

OBJS = ${SRCS:.c=.o}

NAME = push_swap

HEADER = -I "./include" -I"./libft"

FLAGS = -Wall -Werror -Wextra

DEBUG = -g -std=c11 -fsanitize=address

CC = gcc

RM = rm -f

CD = cd

.c.o:
			${CC} ${FLAGS} ${HEADER} -c $< -o $@ ${DEBUG}

${NAME}:	${OBJS}
			cd libft; make;
			${CC} -o ${NAME} ${OBJS} ${FLAGS} ${LIBFT} ${DEBUG}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
