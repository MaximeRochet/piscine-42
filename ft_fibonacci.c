/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:41:36 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/22 16:42:47 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int ret;

	ret = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	ret = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (ret);
}
