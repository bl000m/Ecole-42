SRCS  =  ./srcs/main.c ./srcs/ft_atoi.c ./srcs/ft_putstr.c ./srcs/ft_split.c\
		 ./srcs/ft_strlen.c ./srcs/ft_strncat.c ./srcs/ft_strncpy.c ./srcs/ft_strndup.c ./srcs/carre.c\
		 ./srcs/get_data.c ./srcs/ft_draw_square.c ./srcs/map_error.c
OBJS  = ${SRCS:.c=.o}
INCS  = includes
NAME  = bsq
CC    = gcc
RM    = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o test
