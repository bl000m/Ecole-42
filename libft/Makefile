# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:34:03 by mpagani           #+#    #+#              #
#    Updated: 2022/11/10 16:53:36 by mpagani          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS  = test.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_bzero.c ft_isascii.c ft_isprint.c \
		ft_memcpy.c ft_memset.c ft_strlen.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_strncmp.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c
OBJS  = ${SRCS:.c=.o}
NAME  = libft.a
CC    = gcc
RM    = rm -f
CFLAGS  = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I./

${NAME} : ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS} -I./
	ar -rc libft.a ${OBJS}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o test
