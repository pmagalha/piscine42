/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:37:13 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/20 08:48:28 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*int	main(void)
{
	char str1[] = "Hello, ";
	char str2[] = "peeps";

	printf("Original strings are %s and %s\n", str1, str2);
	printf("New string is %s", ft_strcat(str1, str2));
}*/
