/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 08:41:11 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/15 16:04:35 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	y = 0;
	while (src[i] != '\0')
		i++;
	while (y < size)
	{
		dest[y] = src[y];
		y++;
	}
	while (y < size)
	{
		dest[y] = '\0';
		y++;
	}
	return (i);
}
