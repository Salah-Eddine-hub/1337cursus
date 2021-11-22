/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:38:11 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/02 18:29:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[6] = "salah";

// 	ft_bzero(str, 5);
// 	printf("%s", str);
// }
