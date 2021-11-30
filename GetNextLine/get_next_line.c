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
// #define BUF_SIZE 100000

size_t	buffer_checker(char **buffer)
{
	size_t	i;

	i = 0;
	while (buff[i])
		if (buff[i++] == '\n')
			return (i - 1);
	return (i);
}
char *get_next_line(int fd)
{
	char	*buffer;
	static char	*save;
	int		i;

	i = 0;
	buffer = (char *) malloc (sizeof(char)*(BUFFER_SIZE+1));
	if (!buffer)
		return (NULL);
	save = read(fd, buffer, BUFFER_SIZE);
}

int main(void)
{
	int	fd;

	fd = open("next.txt", O_RDONLY);
	fo (int i = 0; i < 3; i++)
		printf("%s", get_next_line(fd));
}


// int main(void)
// {
//     int fd;
// 	int ret;
// 	char	str[BUFFER_SIZE + 1];

//     fd = open("next.txt", O_CREAT  | O_RDWR);
// 	printf("fd = %d \n", fd);
// 	if (fd == -1)
// 		return (1);
// 	ret = read(fd, str, BUFFER_SIZE);
// 	str[ret] = '\0';
// 	printf("ret = %d\n", ret);
// 	printf("%s", str);
// }