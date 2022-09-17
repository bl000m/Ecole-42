/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:04:11 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/15 11:35:00 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_check_error(char *base); 
int		ft_posit(char c, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int		result;
	int		i;
	int		minus;
	
	result = 0;
	i = 0;
	minus = 0;
	if (ft_check_error(base))
	while ((str[i] == 32) || (str[i] == 9) || (str[i] == 10)
		|| (str[i] == 11) || (str[i] == 12) || (str[i] == 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		minus++;
		i++;
	}
	while (ft_posit(str[i], base) != -1)
	{
		result = result * ft_strlen(base) + ft_posit(str[i], base);
		i++;
	}
	if (minus % 2 != 0)
		return (result * -1);
	return (result);
}

int main()
{
	printf("%d\n", ft_atoi_base("4581", "0123456789"));//4581
	printf("%d\n", ft_atoi_base("01CE", "0123456789ABCDEF"));//1 12 14 => 1 * 16 * 16 + 12 * 16 + 14 =   
	printf("%d", ft_atoi_base("it", "atoi"));//13 => 3  * 4 + 1  
	//gerer les maj et min ?
	//0 = aa
	//1 = at
	//2 = ao
	//3 = ai
	//4 = ta
	//5 = tt
	//6 = to
	//7 = ti
	//8 = oa
	//9 = ot
	//
}

int		ft_posit(char c, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_check_error(char *base) 
{
	int	i;
	int k;
	
	i = 0;
	k = 1;
	while (i < (ft_strlen(base) - 1))
	{
		if (((ft_strlen(base) < 2)) || ((base[i] == 32) || (base[i] == 9) 
			|| (base[i] == 10) || (base[i] == 11) || (base[i] == 12) || (base[i] == 13))
			|| ((base[i] == '+') || (base[i] == '-')))
			return (0);
		while (base[k])
		{
   			if (base[i] == base[k])
				return (0);
			k++;

		}
		i++;
		k = i +1;		
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
