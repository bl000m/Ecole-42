# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:34:03 by mpagani           #+#    #+#              #
#    Updated: 2022/11/18 11:17:03 by mpagani          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS  = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_bzero.c ft_isascii.c ft_isprint.c \
		ft_memcpy.c ft_memset.c ft_strlen.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_strncmp.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_striteri.c
SRC_BONUS  = ft_lstdelone_bonus.c ft_lstsize_bonus.c\
		ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c
OBJS  = ${SRCS:.c=.o}
OBJS_BONUS = $(SRC_BONUS:.c=.o)
NAME  = libft.a
CC    = cc
AR    = ar
RM    = rm -f
FLAGS  = -Wall -Wextra -Werror
HEADER_FILE = libft.h

all : ${NAME}

${NAME} : ${OBJS}
	${AR} -rcs ${NAME} ${OBJS}

%.o: %.c ${HEADER_FILE} Makefile
	${CC} ${FLAGS} -c $< -o $@ -I

clean :
	${RM} -f ${OBJS} ${OBJS_BONUS}

fclean : clean
	${RM} -f ${NAME}

re : fclean all

bonus : ${OBJS} ${OBJS_BONUS}
	$(AR) -rcs $(NAME) ${OBJS} ${OBJS_BONUS}

.PHONY: all clean fclean re bonus
