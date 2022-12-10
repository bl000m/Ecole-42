# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 14:44:01 by mpagani           #+#    #+#              #
#    Updated: 2022/12/10 12:37:36 by mpagani          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap
SRCS 		= main.c push_swap.c op_s.c op_r.c op_p.c \
			op_rr.c display_list.c ft_min_max.c check_pos.c \
			nb_small.c nb_big.c stack_size.c stack_add_front.c \
			stack_add_back.c stack_last.c stack_new.c
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

#$(AR) -rcs $(NAME) $(OBJS)
#	@echo "Linking $@"
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "Done!"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c $(INCS_DIR)/$(HEADER_FILE) Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCS_DIR) -I$(LIBFT_DIR)

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
