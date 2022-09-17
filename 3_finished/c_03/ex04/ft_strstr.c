/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:25:39 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/14 10:42:44 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (!(to_find))
		return (str);
	while (to_find[b] != '\0')
		b++;
	if (to_find == 0)
		return (str);
	
	while ((str[i] != '\0'))
	{
		if (ft_strncmp((&str[i]), (to_find), (b - 1)) == 0)
		{
			return (&str[i]);
			break ;
		}
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n > 0)
	{
		i = 0;
		while ((s1[i]) && (s2[i]) && (s1[i] == s2[i]) && (i < (n - 1)))
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}
