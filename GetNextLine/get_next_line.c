/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:19:49 by sharrach          #+#    #+#             */
/*   Updated: 2021/11/28 10:19:52 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// we need to add a  line How?
// know the len of the line
// print the line 
#include<fcntl.h>
// char	*get_next_line(int fd)
// {
// 	fd = open("next.txt", O_RDWR | O_CREAT)
// }
#define BUF_SIZE 10
#include<stdio.h>
#include<unistd.h>
int main(void)
{
    int fd;
	int ret;
	char	str[] = "Hello!";

    fd = open("next", O_CREAT  | O_RDWR);
	printf("fd = %d \n", fd);
	if (fd == -1)
		return (1);
	ret = read(fd, str, BUF_SIZE);
	str[ret] = '\0';
	printf("ret = %d", ret);
	printf("%s", str);
}