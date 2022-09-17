/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:11:46 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/05 10:32:53 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	putchar(char lettre);

void	boucle(char debut, char milieu, char fin, int longeur)
{
	int		i;
	char	rl;

	rl = '\n';
	i = 0;
	putchar(debut);
	while (i < (longeur - 2))
	{
		putchar(milieu);
		i ++;
	}
	putchar(fin);
	putchar(rl);
}

void	ligne_1(int x)
{
	char	a;
	char	b;
	char	c;		
	char	rl;

	rl = '\n';
	a = 'A';
	b = 'B';
	c = 'C';
	if (x == 1)
	{
		putchar(a);
		putchar(rl);
	}
	else if (x == 2)
	{
		putchar(a);
		putchar(c);
		putchar(rl);
	}
	else if (x > 2)
	{
		boucle(a, b, c, x);
	}
}

void	ligne_2(int x)
{
	char	b;
	char	esp;	

	b = 'B';
	esp = ' ';
	if (x == 1)
	{
		putchar(b);
	}
	else if (x == 2)
	{
		putchar(b);
		putchar(b);
	}
	else if (x > 2)
	{
		boucle(b, esp, b, x);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (y == 1)
	{
		ligne_1(x);
	}
	else if (y == 2)
	{	
		ligne_1(x);
		ligne_1(x);
	}
	else if (y > 2)
	{
		ligne_1(x);
		while (i <= (y - 2))
		{
			ligne_2(x);
			i ++;
		}
		ligne_1(x);
	}	
}
