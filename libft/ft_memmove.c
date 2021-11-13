/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:36:28 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 15:36:31 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char sResult[100] = "ABCDEF";
// 	char sResult2[100] = "ABCDEF";

// 	// char dst[20] = "Hello";

// 	printf("%s\n", sResult);
// 	printf("%s\n", sResult2);
// 	ft_memmove(sResult + 1, sResult2, 5);
// 	printf("%s\n", sResult);
// }
