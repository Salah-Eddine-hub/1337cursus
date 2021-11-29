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

#include"get_next_line.h"
#define BUF_SIZE 1

// we need to add a  line How?
// know the len of the line
// print the line 
// char	*get_next_line(int fd)
// {
// 	fd = open("next.txt", O_RDWR | O_CREAT)
// }
char *get_next_line(int fd)
{

}

int main(void)
{
    int fd;
	int ret;
	char	str[BUF_SIZE + 1];

    fd = open("next.txt", O_CREAT  | O_RDWR);
	printf("fd = %d \n", fd);
	if (fd == -1)
		return (1);
	ret = read(fd, str, BUF_SIZE);
	str[ret] = '\0';
	printf("ret = %d\n", ret);
	printf("%s", str);
}