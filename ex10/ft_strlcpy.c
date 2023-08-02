/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:23:33 by tjegades          #+#    #+#             */
/*   Updated: 2023/07/29 11:23:34 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	if ((int)size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	c[] = "hello";
	char	d[10] = "abcdefg";
	printf("%i\n", ft_strlcpy(d, c, 10));
	printf("%s", d);
}
*/