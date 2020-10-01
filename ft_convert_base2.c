/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:01:11 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/29 19:41:06 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int i;
	int a;

	i = 0;
	while (base[i])
	{
		a = i + 1;
		if ((base[i] <= 9 && base[i] >= 13) || base[i] == 32)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[a])
		{
			if (base[i] == base[a])
				return (0);
			a++;
		}
		i++;
	}
	return (i);
}

int		is_in(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
