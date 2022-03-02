/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools_libft2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:27:15 by ilkridah          #+#    #+#             */
/*   Updated: 2022/03/02 16:19:30 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	join(char const *dest, char const *src, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		str[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		str[i + j] = src[j];
		j++;
	}
	str[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total;

	if (!s1 || !s2)
		return (0);
	total = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(total + 1);
	if (!str)
		return (NULL);
	join(s1, s2, str);
	return (str);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < n - 1 && s1[i] && s2[i])
		i++;
	if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
		return (1);
	else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
		return (-1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
