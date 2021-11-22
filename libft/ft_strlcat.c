/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:33:24 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 15:33:27 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		len_src;
	size_t		len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize > 0)
	{
		while (src[i] && dstsize - 1 > len_dst + i)
		{
			dst[len_dst + i] = src[i];
			i ++;
		}
		dst[len_dst + i] = '\0';
	}
	if (dstsize >= len_dst)
		return (len_src + len_dst);
	return (len_src + dstsize);
}

// #include<stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	check(ft_strlcat(dest, src, -1) == 14 &&
// !strcmp(dest, "CCCCCAAAAAAAAA")); showLeaks();
// 	memset(dest, 'C', 15);
// }
