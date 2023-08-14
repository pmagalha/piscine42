/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:33:02 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/25 12:07:01 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	{
		while (n < nb)
		{
			if (nb == n * n)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d",ft_sqrt(46300));
}*/
