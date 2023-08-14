/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:56:37 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/18 13:36:21 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char str1[] = "HellA";
	char str2[] = "HellI";
	printf("%d",ft_strcmp(str1, str2));
}*/
