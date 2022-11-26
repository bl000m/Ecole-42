/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:43:39 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/21 12:36:43 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_check(va_list args, const char *format, int size);
int		ft_check_tag(va_list args, char c, int size);
int		ft_output_c(int c, int size);
int		ft_output_s(char *s, int size);
int		ft_output_p(va_list args, int size);
int		ft_output_x(va_list args, int size);
int		ft_output_xmaj(va_list args, int size);
int		ft_output_d(va_list args, int size);
int		ft_output_u(va_list args, int size);
int		ft_output_perc(int size);
void	ft_putnbr(int nb);
int		ft_putnbr_base(unsigned long long nb, unsigned int base, char *digits);

#endif
