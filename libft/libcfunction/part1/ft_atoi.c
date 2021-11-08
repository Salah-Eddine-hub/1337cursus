/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:34:10 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 15:34:12 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	b;

	i = 0;
	c = 1;
	while ((str[i] >= 9 &&  str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	b = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		b *= 10;
		b += str[i] - 48;
		i++;
	}
	return (c * b);
}

int	main(void)
{
	char u[]="  \t \r -+--+-----a----+-12 548kd ";
		printf("%d", ft_atoi(u));
}
