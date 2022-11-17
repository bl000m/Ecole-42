SRCS = ft_printf.c
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
HEADERS = libftprintf.HEADERS
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
