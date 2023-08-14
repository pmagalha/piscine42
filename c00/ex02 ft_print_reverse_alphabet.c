/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:05:18 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/10 13:34:49 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zeta;

	zeta = 'z';
	while (zeta >= 'a')
	{
		write (1, &zeta, 1);
		zeta--;
	}
}
