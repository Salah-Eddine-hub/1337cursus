/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:16:18 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/12 19:16:20 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include<stdio.h>
// void fun(unsigned int k, char *c)
// {
// 	*c += 1;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "Hello";
// 	printf("%s \n", str);
// 	ft_striteri(str,fun);
// 	printf("%s",str );
// }
