/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:09 by ilkridah          #+#    #+#             */
/*   Updated: 2022/03/02 16:19:43 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first_child(int *pipefd, int *fd, char **av, char **env)
{
	char	**cmd1;
	pid_t	cpid;

	cpid = fork();
	if (cpid < 0)
		finish("fork");
	if (cpid == 0)
	{
		fd[0] = open(av[1], O_RDONLY, 0777);
		if (fd[0] < 0)
			finish(av[1]);
		cmd1 = ft_split(av[2], ' ');
		close(pipefd[0]);
		dup2(fd[0], STDIN_FILENO);
		dup2(pipefd[1], STDOUT_FILENO);
		if (cmd1[0] && my_path(cmd1[0], env))
		{
			execve(my_path(cmd1[0], env), cmd1, env);
			free_split(cmd1);
		}
		else
			cmd_not_found(cmd1);
	}
}

void	second_child(int *pipefd, int *fd, char **av, char **env)
{
	char	**cmd2;
	pid_t	cpid;

	cpid = fork();
	if (cpid < 0)
		finish("fork");
	if (cpid == 0)
	{
		fd[1] = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0777);
		if (fd[1] < 0)
			finish(av[4]);
		cmd2 = ft_split(av[3], ' ');
		close(pipefd[1]);
		dup2(fd[1], STDOUT_FILENO);
		dup2(pipefd[0], STDIN_FILENO);
		if (cmd2[0] && my_path(cmd2[0], env))
		{
			execve(my_path(cmd2[0], env), cmd2, env);
			free_split(cmd2);
		}
		else
			cmd_not_found(cmd2);
	}
}

int	main(int ac, char **av, char **env)
{
	int	pipefd[2];
	int	fd[2];

	if (ac != 5)
	{
		form1();
		exit(EXIT_FAILURE);
	}
	if (pipe(pipefd) < 0)
		finish("pipe");
	first_child(pipefd, fd, av, env);
	second_child(pipefd, fd, av, env);
	close(pipefd[0]);
	close(pipefd[1]);
	wait(NULL);
	return (0);
}
