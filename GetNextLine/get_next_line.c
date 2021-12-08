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

#include "get_next_line.h"
// #include "get_next_line_utils.c"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*next_line;
	size_t		buffer_len;
	int			ret;

	next_line = malloc (1 * sizeof(char));
	if (!next_line)
		return (0);
	next_line[0] = '\0';
	while (!ft_strchr(next_line, '\n'))
	{
		if (!*buffer)
		{
			ret = read(fd, buffer, BUFFER_SIZE);
			buffer[ret] = '\0';
			if (ret < 1)
				break ;
		}
		buffer_len = 0;
		while (buffer[buffer_len] && buffer[buffer_len] != '\n')
			buffer_len ++;
		if (buffer[buffer_len] == '\n')
			buffer_len ++;
		next_line = ft_strnljoin(next_line, buffer);
		ft_strcpy(buffer, buffer + buffer_len);
	}
	if (*next_line == '\0')
		return (0);
	return (next_line);
}
/*
int main(void)
{
	int	fd;
	char *str;

	fd = open("text.txt", O_RDONLY);
	while((str = get_next_line(fd)))
		printf("%s", str);
}
*/