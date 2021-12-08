/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:20:03 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/28 10:20:05 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

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
char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strnljoin(char const *s1, char const *s2)
{
	char	*s;
	int		s_len;
	int		s2_len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	s2_len = 0;
	while (s2[s2_len] && s2[s2_len] != '\n')
		s2_len++;
	if (s2[s2_len] == '\n')
		s2_len++;
	s = ((char *)malloc(ft_strlen(s1) + s2_len + 1));
	if (s == 0)
		return (NULL);
	ft_strcpy(s, (char *) s1);
	s_len = ft_strlen(s);
	i = 0;
	while (i < s2_len)
	{
		s[s_len + i] = s2[i];
		i++;
	}
	s[s_len + i] = '\0';
	free ((void *)s1);
	return (s);
}


// char	*ft_strnljoin(char const *s1, char const *s2, size_t n)
// {
// 	char	*buffer;
// 	size_t	buffer_len;
// 	size_t	i;

// 	if (!s1)
// 		return (0);
// 	buffer_len = ft_strlen(s2);
// 	if (n < buffer_len)
// 		buffer_len = n;
// 	buffer = (char *) malloc (ft_strlen(s1) + buffer_len + 1);
// 	if (buffer == NULL)
// 		return (0);
// 	i = -1;
// 	while (s1[++i] != '\0')
// 		buffer[i] = s1[i];
// 	buffer_len = i;
// 	i = 0;
// 	while (s2[i] != '\0' && i < n)
// 	{
// 		buffer[i + buffer_len] = s2[i];
// 		i ++;
// 	}
// 	buffer[i + buffer_len] = '\0';
// 	free((void *)s1);
// 	return (buffer);
// }