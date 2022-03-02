/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:34:19 by ilkridah          #+#    #+#             */
/*   Updated: 2022/03/02 16:19:34 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static int	counter(char const *s, char c)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			counter++;
		while (s[i] != c && s[i])
		i++;
	}
	return (counter);
}

static char	*ft_word(char *str, char c)
{
	char	*newstr;
	int		k;

	k = 0;
	while (str[k] != '\0' && str[k] != c)
		k++;
	newstr = (char *)malloc(sizeof(char) * k + 1);
	if (!newstr)
		return (NULL);
	k = 0;
	while (str[k] != '\0' && str[k] != c)
	{
		newstr[k] = str[k];
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		i;

	i = 0;
	if ((s == 0 && c == 0) || s == 0)
		return (0);
	newstr = (char **)malloc(sizeof(char *) * (counter((char *)s, c) + 1));
	if (!newstr)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			newstr[i] = ft_word((char *)s, c);
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	newstr[i] = NULL;
	return (newstr);
}
