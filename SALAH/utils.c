/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:42:25 by ilkridah          #+#    #+#             */
/*   Updated: 2022/03/02 16:19:36 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	finish(char *x)
{
	if (errno == 0)
	{
		write(2, "\033[0;31m", 8);
		write(2, "Error\n", 6);
	}
	else
		perror(x);
	exit(EXIT_FAILURE);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free (split[i]);
		i++;
	}
	free (split);
}

void	form1(void)
{
	write(2, "\033[0;31m", 8);
	write(2, "FORM : ./pipex [Infile] [cmd1] [cmd2] [Outfile]\n", 48);
	exit(EXIT_FAILURE);
}

void	cmd_not_found(char **cmd)
{
	write(2, "\033[0;31m", 8);
	write(2, "command not found: ", 19);
	write(2, "\033[0;31m", 8);
	write(2, cmd[0], ft_strlen(cmd[0]));
	write(2, "\033[0;31m", 8);
	write(2, "\n", 1);
	free_split(cmd);
	exit(EXIT_FAILURE);
}
