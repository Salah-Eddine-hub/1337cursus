/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:30:42 by sharrach          #+#    #+#             */
/*   Updated: 2022/03/01 15:39:22 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_command(char *av, char **env)
{
	char	**s_paths;
	char	**cmd;
	char	*path;

	s_paths = split_paths(env);
	cmd = ft_split(av, ' ');
	path = add_cmd_path(cmd[0], s_paths);
	if (path == NULL)
		return (NULL);
	cmd[0] = path;
	return (cmd);
}

static void	exec_first_cmd(char **av, char **cmd, char **env, int p[2])
{
	int	fdin;

	close(p[STDIN_FILENO]);
	dup2(p[STDOUT_FILENO], STDOUT_FILENO);
	close(p[STDOUT_FILENO]);
	fdin = open(av[1], O_RDONLY);
	dup2(fdin, STDIN_FILENO);
	close(fdin);
	if (execve(cmd[0], cmd, env) == -1)
		perror("Could not execve");
	exit(EXIT_FAILURE);
}

static void	exec_second_cmd(char **av, char **cmd, char **env, int p[2])
{
	int		fdout;
	pid_t	pid;

	pid = fork();
	if (pid == -1)
		exit(EXIT_FAILURE);
	if (pid == 0)
	{
		close(p[STDOUT_FILENO]);
		dup2(p[STDIN_FILENO], STDIN_FILENO);
		close(p[STDIN_FILENO]);
		fdout = open(av[4], O_RDWR | O_TRUNC | O_CREAT, 0644);
		dup2(fdout, STDOUT_FILENO);
		close(fdout);
		if (execve(cmd[0], cmd, env) == -1)
			perror("Could not execve");
		ft_free2d(cmd);
		exit(EXIT_FAILURE);
	}
	waitpid(pid, NULL, 0);
	close(p[STDOUT_FILENO]);
	close(p[STDIN_FILENO]);
}

int	main(int ac, char **av, char **env)
{
	char	**cmd;
	char	**cmd1;
	int		p[2];
	int		pid;

	if (ac != 5)
		return (EXIT_FAILURE);
	cmd = get_command(av[2], env);
	cmd1 = get_command(av[3], env);
	if (cmd == NULL)
		exit(EXIT_FAILURE);
	pipe(p);
	if (pipe(p) == -1)
		exit(EXIT_FAILURE);
	pid = fork();
	if (pid == -1)
		exit(EXIT_FAILURE);
	if (pid == 0)
		exec_first_cmd(av, cmd, env, p);
	exec_second_cmd(av, cmd1, env, p);
	return (EXIT_SUCCESS);
}
