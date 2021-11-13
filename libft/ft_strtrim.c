/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:23:05 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/13 12:23:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_tstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static	int	ft_tend(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	char	*nstr;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (ft_strdup (s1));
	s = ft_tstart(s1, set);
	e = ft_tend(s1, set);
	if (s >= e)
		return (ft_strdup(""));
	nstr = (char *)malloc(sizeof(char) * (e - s + 1));
	if (nstr == 0)
		return (0);
	ft_strlcpy(nstr, s1 + s, e - s + 1);
	return (nstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char se[] = "hello guys";
// 	char set[] = "lo";

// 	printf("%s", ft_strtrim(se, set));
// }
