/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:50:04 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 09:30:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	while (s[i] != '\0')
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (0);
}
/*
#include <string.h>
int main()
{
	char str[]= "salah hh";
	printf("%s", ft_strchr(str, '\0'));
}*/
