# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 14:44:01 by mpagani           #+#    #+#              #
#    Updated: 2022/12/03 18:30:28 by mpagani          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap
SRCS 		= main.c push_swap.c push_stack.c reverse_stack.c swap_stack.c \
			rotate_reverse_stack.c
CC 			= cc
AR 			= ar
RM 			= rm -f
SRCS_DIR	= ./srcs
INCS_DIR	= ./includes
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
BUILD_DIR	= build
OBJS 		= $(SRCS:%.c=$(BUILD_DIR)/%.o)
CFLAGS 		= -Wall -Werror -Wextra
HEADER_FILE = push_swap.h

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Linking $@"
	$(AR) -rcs $(NAME) $(OBJS)
	@echo "Done!"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c $(INCS_DIR)/$(HEADER_FILE) Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS_DIR) -I $(LIBFT_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) -r $(BUILD_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
