SRCS = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

UNAME_S = $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	CFLAGS := -Wall -Wextra -Werror -fPIE
else
	CFLAGS := -Wall -Wextra -Werror
endif

SRC_PATH = ./src

SRC_NAME =	main.c raycasting.c event.c \
		draw_tool.c color.c parsingc.c\
		get_next_line.c get_next_line_utils.c \
		utils.c texture.c sky_floor.c \
		sprites.c sprites_tab.c init.c \
		struct.c screen.c error.c \
	 	move.c parsing.c parsingb.c\
		utilsb.c raycastingb.c \
		sprites_tabb.c spritesb.c textureb.c\
		parsingd.c parsinge.c parsingf.c\

LIBFT = ./libft/libft.a

LIB = cd ./libft; make; cd ..;

OBJS = ${SRCS:.c=.o}

NAME = cube3D

HEADER = -I "./include"

FLAGS = -Wall -Werror -Wextra

MINILIBX = -I /usr/local/incude -L /usr/local/lib/ -lmlx -framework OpenGL -framework AppKit

DEBUG = -g -std=c11 -fsanitize=address

CC = gcc

RM = rm -f

CD = cd

.c.o:
			${CC} ${FLAGS} ${HEADER} -c $< -o $@ ${DEBUG}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${FLAGS} ${MINILIBX} ${LIBFT} ${DEBUG}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY =	all clean fclean re
