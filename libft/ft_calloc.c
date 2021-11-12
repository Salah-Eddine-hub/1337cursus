/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:56:35 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/06 09:56:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}

// int	main(void)
// {
// 	int		i;
// 	char	*arr;

// 	i = 0;
// 	arr = ft_calloc(5, sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%c\n", arr[i++]);
// 	}
// }
