/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:48:12 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/01 12:48:15 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 101 && c <= 132) || (c >= 142 && c <= 172))
		return (1);
	else
		return (0);
}

/*int main ()
{
    int i = 171;
    printf("%d", ft_isalpha(i));
}*/