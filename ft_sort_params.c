/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 21:37:40 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/24 14:12:34 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare(char *string1, char *string2)
{
	int		i;

	i = 0;
	while (string1[i] == string2[i])
	{
		if (string1[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)string1[i] - (unsigned char)string2[i]);
}

void	echange(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	affiche(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		comp;

	i = 1;
	while (i < ac - 1)
	{
		comp = compare(av[i], av[i + 1]);
		if (comp > 0)
		{
			echange(&av[i], &av[i + 1]);
			i = 0;
		}
		i++;
	}
	affiche(ac, av);
}
