/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:54:59 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/08 09:55:01 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;
	size_t	len;
	char	**arr;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			count++ ;
		i++ ;
	}
	arr = (char **) malloc ((count + 1) * sizeof(char *));
	if (arr == NULL)
		return (0);
	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] == c)
			j++;
		len = 0;
		while (s[j] != c)
		{
			j++;
			len++;
		}
		arr[i] = (char *) malloc ((len + 1) * sizeof(char));
		if (arr[i] == NULL)
			return (0);
		k = 0;
		while (k < len)
		{
			arr[i][k] = s[k + j - len];
			k++;
		}
		i++;
	}
	arr[i] = (char *) malloc (1 * sizeof(char));
	arr[i] = 0;
	return (arr);
}

// #include<stdlib.h>
// #include<string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str[100] = "Hello World!";
// 	char	c = 'o';
// 	char	**array = ft_split(str, c);

// 	int i = 0;
// 	while (array[i] != 0)
// 	{
// 		printf("%d. '%s'\n", i, array[i]);
// 		i ++;
// 	}
// }

/*
char	str[100] = "Hello World!";
char	c = 'o';

**array = [
			“Hell”,
			“ W”,
			“rld!”,
			0
		];

1st step: malloc the array.
array = (char **) malloc ((how many elemets?) * sizeof(char *));


2nd step: malloc each string.
arr[i] = (char *) malloc ((string length? + 1) * sizeof(char));

if (s[i] != c)
	len++;
*/