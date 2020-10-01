/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 21:19:47 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/15 08:39:24 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	tmp;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			tmp = str[i];
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (!((tmp >= 'a' && tmp <= 'z') || (tmp >= '0' && tmp <= '9')))
		{
			tmp = str[i];
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
			tmp = str[i];
		i++;
	}
	return (str);
}
