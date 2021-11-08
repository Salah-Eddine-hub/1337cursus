/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:59:57 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/06 15:00:00 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

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

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;
	int	lendest;
	int	lensrc;
	int	lenofboth;

	i = 0;
	j = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	lenofboth = lendest + lensrc;
	while (i < lendest)
		i++;
	while (i < lenofboth)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tall;
	char	*s;

	tall = ft_strlen(s1) + ft_strlen(s2);
	s = ((char *)malloc(tall + 1));
	if (tall == '\0')
		return (0);
	ft_strcat(s, (char *) s1);
	ft_strcat(s, (char *) s2);
	return (s);
}

int	main(void)
{
	char	str[] = "sala39#5h";
	char	src[] = "eddine#@";

	printf("%s", ft_strjoin(str, src));
}
