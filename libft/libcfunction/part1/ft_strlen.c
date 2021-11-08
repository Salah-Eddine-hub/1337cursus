/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:33:37 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/02 11:33:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const	char *str)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf("%zu", ft_strlen("salah"));
}
