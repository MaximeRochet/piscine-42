/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_tableau.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:26:51 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/19 21:57:00 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// fonction qui enleve les espaces et remplace les char en int
// fonction qui verifie les chiffres par lignes et colonnes


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
		if (av[i] > 47 && av[i] < 58)
			{
				array[j] = av[i] - 48;
				j++;
			}
		i++;
	}
	return (array);
}

int main(int ac, char **av)
{
	int i;
	int *lol;
	   
	lol	= array_int(av[1]);

	(void)ac;
	i = 0;
	while (i < 16)
	{
		printf("%d ",lol[i]);
		i++;
	}
	free(lol);
	return (0);
}
