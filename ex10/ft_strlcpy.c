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

	i = 0;
	while (src[i] != '\0' && i++ < size - 1)
		dest[i - 1] = src[i - 1];
	src[i] = '\0';
	return i;
}
/*
#include <stdio.h>
int	main(void)
{
	char	c[] = "hello";
	char	d[100];
	ft_strlcpy(d, c, 6);
	printf("%s", d);
}
*/