/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 13:34:31 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/20 16:21:58 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

	// *si plus d un parametre 
	// *si str != 31 caracteres
	// si str[i] != 16
	// *si nbr est entre 1 et 4
	// return 1 / Error si ne fonctione pas
	// return 0 si le programme peut se lancer 




int *array_int(char *av)
{
	int i;
	int j;
	int *array;

	if (!(array = (int *)malloc(sizeof(int) * 16)))
		return (0);
	i = 0;
	j = 0;
	while (av[i] != '\0')
	{
		if (av[i] >= '0' && av[i] <= '4')
			{
				array[j] = av[i] - 48;
				j++;
			}
		i++;
	}
	return (array);
}

int check_arguments_count(int ac)
{
	if (ac != 2)
		return(1);
	return (0);
}

int check_arguments_value(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
	{	
		if ((i % 2 == 0) && (av[i] < 48 && av[i] > 52)) 
			return(1);

		else if ((i % 2 == 1) && (av[i] != 32))	
			return(1);
		i++;
	}	
	if (i != 31)	
		return(1);
	array_int(av);
	return(0);
}

int	*check(int ac,char *av)
{
	if ((check_arguments_count(ac) == 0) && (check_arguments_value(av) == 0))
		return (array_int(av));
	else
		write(1, "t'es nul", 10);
		return (0);
}		

int main(int ac, char **av)
{
	int i;
	int *lol;
	(void)ac;
	
	lol = check(ac, av[1]);

	i = 0;
	while (i < 16)
	{
		printf("\n%d ",lol[i]);
		i++;
	}
	free(lol);
	return (0);
}
