/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:24:54 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/16 12:23:27 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);
void 	ft_show_tab(struct s_stock_str *par);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_strdup(char *src);
	
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;

#endif
