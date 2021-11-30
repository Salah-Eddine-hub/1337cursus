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

#ifndef get_next_line_h
# define get_next_line_h

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


// #define BUFFER_SIZE 1

char	*get_next_line(int fd);
size_t	ft_strlen(const	char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcpy(char *dst, const char *src);

#endif