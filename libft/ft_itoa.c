/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:01:03 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/12 18:01:05 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

static size_t	ft_n(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{	
	size_t	i;
	char	*ptr;
	long	np;
	size_t	k;

	i = 0;
	np = n;
	k = ft_n(np);
	if (np < 0)
		i++;
	ptr = malloc(k + i + 1);
	if (!ptr)
		return (NULL);
	ptr[k + i] = '\0';
	if (np < 0)
	{
		ptr[0] = '-';
	}
	while (k)
	{
		ptr[k + i - 1] = (np % 10) + '0';
		np /= 10;
		k--;
	}
	return (ptr);
}

// #include<stdio.h>
// int	main(void)
// {
//     printf ("%s",ft_itoa(-123));
//     return (0);
// }
