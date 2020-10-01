/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:10:24 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/16 20:45:52 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i - j]);
		if (j == 0)
			i++;
	}
	return (0);
}
