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

	s_paths = split_paths(env);
	cmd = ft_split(av[2], ' ');
	path = add_cmd_path(cmd[0], s_paths);
	if (path == NULL)
		return (NULL);
	cmd[0] = path;
	return (cmd);
}

	fdout = open(av[3], O_CREAT | O_RDWR | O_TRUNC, 0644);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	dup2(fdout, STDOUT_FILENO);
	close(fdout);
	if (execve(cmd[0], cmd, env) == -1)
		perror("Could not execve");
int	exec_cmd(char **av, char **cmd, char **env)
{
	int fdin;
	int fd[2];
	int fdout;
	// pid_t	childp;

	fdin = open(av[1], O_RDONLY);
	if(fdin == -1)
		return (0);
	dup2(fdin, STDIN_FILENO);
	close(fdin);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);

	if (execve(cmd[0], cmd, env) == -1)
		perror("Could not execve");
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
	if (pid == -1)
		exiterror("PID Error");
	if (pid == 0)
	{
		exec_cmd(av, cmd, env);
	}
	return (EXIT_SUCCESS);
}


