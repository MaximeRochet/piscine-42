/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:30:01 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/12 18:35:28 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

void	first_line(int compt_x, int x)
{
	if (compt_x == 0)
		putchar('/');
	else if (compt_x == x - 1)
		putchar('\\');
	else
		putchar('*');
}

void	line(int compt_x, int x)
{
	if (compt_x == 0 || compt_x == x - 1)
		putchar('*');
	else
		putchar(' ');
}

void	last_line(int compt_x, int x)
{
	if (compt_x == 0)
		putchar('\\');
	else if (compt_x == x - 1)
		putchar('/');
	else
		putchar('*');
}

void	rush(int x, int y)
{
	int compt_x;
	int compt_y;

	compt_y = -1;
	while (compt_y++ < y && x > 0 && y > 0)
	{
		compt_x = 0;
		while (compt_x < x)
		{
			if (compt_y == 0)
				first_line(compt_x, x);
			else if (compt_y == y)
				last_line(compt_x, x);
			else
				line(compt_x, x);
			compt_x++;
		}
		write(1, "\n", 1);
	}
}
