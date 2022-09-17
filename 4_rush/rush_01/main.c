/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:03:41 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/11 19:24:46 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int main()
{
	char result[] = "Error";
	ft_putstr(result);
	ft_putchar('\n');
}

/*
ROADMAP
1_
// CREATE an aRRAY OF ARRAYS ( 6x6 including the views = 2*rows + 2*columns?)
// (malloc or not? see well how it works with free but porbably not needed if we use a multidimensional array)

2_
//EXTERNAL SIDE: loop on the string passed as commandline  argument to assign every vue (corresponding to the position related to the sequence passed in commandline argument)
//to an external case 
//=> LEFT TO RIGHT colup: 1 2 3 4 coldown: 5 6 7 8 
//=> UP TO DOWN rowleft: 9 10 11 12 rowright: 13 14 15 16) to the right case int the array of arrays
(how to move vertically while looping?)

3_
// FIND RELATIONSHIP between numbers. FOUNDED THE FOLLWING:

//if val=3 && case_3 = 3 => seq= 2134
//if val=2 && val_oppose = 3 => case_2=4
//if val=3 && case_3 = 4 => seq= 1243
//if val=2 && case_1 = 1 => case_2 = 4
//if val=2 && case_1 = 3 => case_4 = 4

4_
//INTERNAL NUMBERS: place as much numbers as possible following the  relationship founded (ex. when view = 4 => case_1 = 1 case_2 = 2 case_3 = 3; case_4 = 4) 
// how to do so? IF conditions

5_
//WHAT TO DO WITH EMPTY CASES? The complexity raise up because we need to put in relationship the behavior of each empty case 
//(what number if there is more than one possibility) with both the external vues (call functions with 4 variables?) and internal already placed number
//=> Create a second multisimensional array to stock probabilities. How to do that ?
//How recursivity could be used to simplify the process? 

6_
//HOW TO ORGANISE FUNCTIONS IN FILES ?


int	main(int argc, char **argv)
{
	char square[6][6]={{0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0},
                      {0, 0, 0, 0, 0, 0}
					  {0, 0, 0, 0, 0, 0}
					  {0, 0, 0, 0, 0, 0}};
	
// l'argument sera cette string: "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	
// looping on external side

// assign values based on relationship founde, and find out how to move backward left-right and up-down.
// A FUNCTION THAT MANAGE THAT and that we can pass the condition to? how to do that?
//  ex left right:
	if (*argv[x] == 4) 
		square[0][0] = 3;
		square[0][1] = 4;
		square[0][2] = 1;
		square[0][3] = 2;
	if (*value[x] == 3) 
		square[1][0] = 2;
		square[1][1] = 3;
		square[1][2] = 4;
		square[1][3] = 1;
	if ((*value[x] == 2) && (*value[y] == 2)) 
		square[2][0] = 3;
		square[2][1] = 4;
		square[2][2] = 1;
		square[2][3] = 2;
	if ((*value[x] == 1) && (*value[y] == 2)) 
		square[3][0] = 3;
		square[3][1] = 4;
		square[3][2] = 1;
		square[3][3] = 2;	

*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

