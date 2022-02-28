/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:28:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/28 13:37:16 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;
	size_t	i;

	if (s == NULL)
		return (0);
	str_len = len;
	if (len > ft_strlen(s) - start)
		str_len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		str_len = 0;
	str = (char *) malloc (sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < str_len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
