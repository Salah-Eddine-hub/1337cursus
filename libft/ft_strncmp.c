/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:00:36 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 13:32:06 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned) s1[i] - (unsigned) s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	str1[]= "sawamura";
// 	char	str2[]= "sicirura";
// 	printf("%d", ft_strncmp(str1, str2, 3));
// }
