/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:46:41 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/20 14:52:59 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_elem
{
	int		rows;
	char	empty;
	char	obst;
	char	full;
}	t_elem;

typedef struct s_posit
{
	int	x;
	int	y;
	int	max;
}	t_posit;

char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strndup(char *str, int n);
char	**ft_split(char *str, char *charset);
char	*get_buffer(char *path);
int		ft_min(int a, int diag, int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		get_buf_size(char *path);
int		**get_int_array(char **array, t_elem *map);
int		ft_is_allowed_array(char **array, char a, char b);
int		is_map_error(char **array);
int		ft_is_allowed_array(char **array, char a, char b);
void	ft_putstr(char *str);
void	ft_putchar(char c);
t_posit	*ft_find_square(int **tab, int rows, int col);
t_elem	*get_map_info(char **array);
t_posit	*ft_check_tab(int **tab, int rows, int col);
void	ft_draw_square(char **array, t_posit *highest_s, t_elem *map_info);

#endif
