/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:43:48 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/17 17:43:50 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char **get_command(char **av, char **env)
{
	char	**s_paths;
	char	**cmd;
	char	*path;

	s_paths = get_paths(env);
	cmd = ft_split(av[2], ' ');
	path = exec_path(cmd[0], s_paths);
	if (path == NULL)
		return (NULL);
	cmd[0] = path;
	return (cmd);
}

int	exec_first_cmd(char **av)
{
	int fd;

	fd = open(av[1], O_RDONLY, 0777);
	if(fd == -1)
		return (0);
	dup2(fd, STDIN_FILENO);
	close (fd);
	return (1);
}


int main (int ac, char **av, char **env)
{
	char	**cmd;
	int		pid;

	(void)ac;
	// if (ac != 3)
	//     return (EXIT_FAILURE);
	cmd = get_command(av, env);
	if (cmd == NULL)
	    return (EXIT_FAILURE);
	pid = fork();
	if (pid == 0)
	{
		// pipe(p);
		exec_first_cmd(av);
		int fd2 = open(av[3], O_CREAT | O_RDWR, 0777);
		dup2(fd2, STDOUT_FILENO);
		close(fd2);
		// int i = 0;
		// while (i < 3)
		// 	printf("%s\n", cmd[0]);
		if (execve(cmd[0], cmd, env) == -1)
			perror("Could not execve");
	}
	return (EXIT_SUCCESS);
}
