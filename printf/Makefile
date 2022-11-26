# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 18:01:43 by mpagani           #+#    #+#              #
#    Updated: 2022/11/21 13:19:03 by mpagani          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a
SRCS 		= ft_printf.c ft_check.c ft_check_tag.c ft_output_c.c \
			ft_output_s.c ft_output_x.c ft_output_p.c ft_putnbr_base.c \
			ft_output_d.c ft_output_xmaj.c ft_output_u.c ft_putnbr.c \
			ft_output_perc.c
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
HEADER_FILE = ft_printf.h

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
