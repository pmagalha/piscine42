/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:41:31 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/25 12:03:55 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		f = f * nb;
		nb --;
	}
	return (f);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
}*/
