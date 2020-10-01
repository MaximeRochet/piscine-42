/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryckely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:39:33 by kryckely          #+#    #+#             */
/*   Updated: 2020/09/12 12:45:19 by kryckely         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	y_first_last(int indice_x, int x_max, char spe1, char spe2)
{
	if (indice_x == 0)
	{
		ft_putchar(spe1);
	}
	else if (indice_x == (x_max - 1))
	{
		ft_putchar(spe2);
	}
	else
	{
		ft_putchar('*');
	}
}

void	y_mid(int indice_x, int x_max)
{
	if (indice_x == 0)
	{
		ft_putchar('*');
	}
	else if (indice_x == (x_max - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x_max, int y_max)
{
	int indice_x;
	int indice_y;

	indice_y = -1;
	while (indice_y++ < y_max - 1 && y_max > 0 && x_max > 0)
	{
		indice_x = 0;
		while (indice_x < x_max)
		{
			if (indice_y == 0)
			{
				y_first_last(indice_x, x_max, '/', '\\');
			}
			else if (indice_y > 0 && indice_y < (y_max - 1))
			{
				y_mid(indice_x, x_max);
			}
			else if (indice_y == (y_max - 1))
			{
				y_first_last(indice_x, x_max, '\\', '/');
			}
			indice_x++;
		}
		write(1, "\n", 1);
	}
}
