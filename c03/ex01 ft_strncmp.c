/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:25:08 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/26 15:46:15 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
	i++;
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int n;

	n = 5;
	char str1[] = "abcdA";
	char str2[] = "abCdB";

	printf("%d", ft_strncmp(str1, str2, n));
}*/
