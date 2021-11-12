/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:41:47 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/06 11:41:49 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static size_t	ft_strlen(const	char *str)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(ft_strlen(s) * sizeof (char));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "abcdefgh";

// 	printf("%s", ft_substr(str, 3, 3));
// }
