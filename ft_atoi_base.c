/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:56:09 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/21 12:37:03 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		is_in(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		find(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == 32 || base[i] == '\t' || base[i] == '\v' ||
				base[i] == '\n' || base[i] == '\r' || base[i] == '\f')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int signe;
	int ret;

	i = 0;
	signe = 1;
	ret = 0;
	if (check_base(base) < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_in(str[i], base) == 1)
	{
		ret = ret * check_base(base) + find(str[i], base);
		i++;
	}
	ret = ret * signe;
	return (ret);
}
