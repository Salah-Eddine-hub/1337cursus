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

static char	**ft_free_arr(int i, char **arr)
{
	while (i-- > 0)
		free(arr[i]);
	free(arr);
	return (0);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i ++;
	if (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	if (!s)
		return (0);
	arr = (char **) malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (0);
	i = -1;
	j = 0;
	while (++i < ft_count(s, c))
	{
		while (s[j] == c)
			j++;
		k = 0;
		while (s[j++] != c)
			k++;
		arr[i] = ft_substr(s, j - k - 1, k);
		if (arr[i] == NULL)
			return (ft_free_arr(i, arr));
	}
	arr[i] = 0;
	return (arr);
}

// #include "ft_substr.c"
// #include "ft_strlen.c"

// #include<stdlib.h>
// #include<string.h>
// #include <stdio.h>

// int	main(void)
// {
// 		char	str[5000] = "hhsalah";
// 		char	c = 'i';
// 		char	**array = ft_split(str, c);

// 		int i = 0;
// 		while (array[i] != 0)
// 		{
// 			printf("%s\n", array[i]);
// 			i ++;
// 		}
// }
