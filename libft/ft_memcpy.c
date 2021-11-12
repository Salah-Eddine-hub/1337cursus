/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:39:20 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 15:39:22 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*b;
	const char	*d;

	i = 0;
	b = (char *)dst;
	d = (const char *)src;
	while (b[i] && d[i])
	{
		if (n > i)
		{
			b[i] = d[i];
		}
		i++;
	}
	b[i] = '\0';
	return (b);
}

// int	main(void)
// {
// 	char dst[20] = "heluo";
// 	char src[20] = "world";

// 	printf("%s", ft_memcpy(dst, src, 3));
// }
