/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:34:39 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/03 15:34:41 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*n;

	i = 0;
	s = (char *)haystack;
	n = (char *)needle;
	​if​ (n[​i] == ​NULL)
		​return​ (0);
 ​        ​while​ (s[i] != ​'​\0​'​ && i < len)
 ​        { 
 ​                j = ​0​; 
 ​                ​while​ (s[i + j] != ​'​\0​'​ && i + j < len && s[i + j] == n[j])
 ​                { 
 ​                        ​if​ (n[j + ​1​] == ​'​\0​'​)
 ​                                ​return​ (&s[i]);
 ​                        j++;
 ​                } 
 ​                i++;
 ​        } 
 ​        ​return​ (​NULL​);
}
