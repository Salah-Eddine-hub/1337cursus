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
// #include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		len_src;
	size_t		len_dst;
	size_t		len;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize > len_dst)
	{
		while (src[i] && len_dst + i < dstsize - 1)
		{
			dst[len_dst + i] = src[i];
			i ++;
		}
		if (i > 0)
			dst[len_dst + i] = '\0';
	}
	len = len_src + dstsize;
	if (len > len_dst + len_src)
		len = len_dst + len_src;
	return (len);
}

// #include<stdio.h>
// #include<string.h>
// int	main(void)
// {
// 	char dest[100] = "Salah";
// 	char sorc[100] = "-Eddine";

// 	for (int i = 0; i < 20; i++)
// 	{
// 		printf("%d, %zu, '%s'\n", i, strlcat(dest, sorc, i), dest);
// 		strcpy(dest, "Salah");
// 		strcpy(sorc, "-Eddine");
// 	}
// 	printf("\n");
// 	for (int i = 0; i < 20; i++)
// 	{
// 		printf("%d, %zu, '%s'\n", i, ft_strlcat(dest, sorc, i), dest);
// 		strcpy(dest, "Salah");
// 		strcpy(sorc, "-Eddine");
// 	}
// }
