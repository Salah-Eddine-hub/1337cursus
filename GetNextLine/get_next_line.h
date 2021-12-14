/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:20:12 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/28 10:20:14 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


// #define BUFFER_SIZE 12

char	*get_next_line(int fd);
size_t	ft_strlen(const	char *str);
char	*ft_strnljoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strcpy(char *dst, const char *src);
#endif