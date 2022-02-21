/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:27:34 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/17 19:27:35 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
 
static char	*ft_strcpy(char *dest, const char *src)
{
	size_t		i;
	char		*s;

	s = (char *)src;
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(src);
	dest = (char *)malloc((i + 1) * sizeof (char));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}