/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:59:20 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/22 12:39:23 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_error(char *base);
int		ft_posit(char c, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(int nbr, char *base, char *result);
void	ft_putchar(char c);
int		ft_check(char *str);
char	*ft_strcat(char *dest, char *src);
int		get_size(int number, char *base);
void	ft_sortie(char *result, char c, int *i);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		res_int;
	int		size;

	if ((!ft_check_error(base_from)) && (!ft_check_error(base_to)))
		return (0);
	res_int = ft_atoi_base(nbr, base_from);//res_int = -12
	printf("res_int recu in convert base (return atoi) %d\n", res_int);
	result = NULL;
	size = get_size(res_int, base_to);
	printf("res_int apres size %d\n", res_int);
	result = NULL;
	size = get_size(res_int, base_to);
	printf("size res in base_to pour mallocer: %d\n", size);
	result = malloc(sizeof(*result) * size + 1);
	if (!result)
		return (result);
	printf("res_int: %d\n", res_int);
	printf("base_to: %s\n", base_to);
	ft_putnbr_base(res_int, base_to, result);	
	return (result);
}

int		get_size(int nbr, char *base)
{
	int	nbr_size;
	int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	nbr_size = 1;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr >= base_size)
	{
		nbr = nbr / base_size;
		nbr_size++;
	}
	return (nbr_size);
}

int		ft_atoi_base(char *str, char *base)
{
	int		result;
	int		i;
	int		minus;

	result = 0;
	i = 0;
	minus = 0;
	printf("numero recu par atoi: %s\n", str);
	if (!ft_check_error(base))
	while ((str[i] == 32) || (str[i] == 9) || (str[i] == 10)
		|| (str[i] == 11) || (str[i] == 12) || (str[i] == 13))
		i++;
	i = 0; 
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		minus++;
		i++;
	}

	printf("numero apres la boucle de -: %s\n", str);
	while (ft_posit(str[i], base) != -1)
	{
		result = result * ft_strlen(base) + ft_posit(str[i], base);
		i++;
	}
	printf("numero apres la boucle de defragmentation: %d\n", result);
	if (minus % 2 != 0)
		result = (result * -1);
		printf("return de atoi si n negatif: %d\n", result);
		return (result);
	return (result);
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
		if ((ft_strlen(base) < 2) || (base[i] == 32) || (base[i] == 9) 
			|| (base[i] == 10) || (base[i] == 11) || (base[i] == 12) || (base[i] == 13))
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base, char *result)
{
	//unsigned int	n;
	 int	size_b;
	 int	i;

	i = 0;
	//n = nbr;
	size_b = ft_strlen(base);
	printf("nbr recu dans putnbr: %d\n", nbr);	
	printf("result recu dans putnbr: %s\n", result);
	//if (nbr < 0)
	//	result[0] = '-';
	//	nbr = -nbr;
	if (nbr < size_b)
		while (result[i])
			i++;
		result[i] = base[nbr];	
	if (nbr >= size_b)
	{
		ft_putnbr_base(nbr / size_b, base, result);
		ft_putnbr_base(nbr % size_b, base, result);
	}
}

int	ft_check(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	if (ft_strlen(str) < 2)
		return (0);
	while (i < (ft_strlen(str) - 1))
	{
		while (str[t])
		{
			if (str[i] == str[t])
				return (0);
			t++;
		}
		i++;
		t = i + 1;
	}
	return (1);
}

char	*ft_strcat(char *dest, char *src)
{
	int		src_s;
	int		dest_s;

	src_s = 0;
	dest_s = 0;
	while (dest[dest_s] != '\0')
		dest_s++;
	while (src[src_s] != '\0')
	{
		dest[dest_s + src_s] = src[src_s];
		src_s++;
	}
	dest[dest_s + src_s] = '\0';
	return (dest);
}

int main()
{
    printf("%s\n", ft_convert_base("22", "0123456789", "0123456789"));
    //printf("%s\n", ft_convert_base("12", "0123456789", "0123456789ABCDEF"));
	//printf("%s\n", ft_convert_base("101010", "01", "0123456789ABCDEF"));
    //printf("%s\n", ft_convert_base("A2", "0123456789ABCDEF", "0123456789"));
    //printf("%s\n", ft_convert_base("01", "0123456789", "poneyvif"));
    //printf("%s\n", ft_convert_base("42", "0123456789", "0123456789ABCDEF"));
}

