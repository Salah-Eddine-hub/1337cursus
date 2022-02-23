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

char *get_command(char **av, char **env)
{
	char	**s_paths;
	char	**cmd;
	char	*path;

	s_paths = get_paths(env);
	cmd = ft_split(av[2], ' ');
	path = exec_path(cmd[0], s_paths);
	
	if (path == NULL)
		return (NULL);
	return (path);
}
//  void	exec_form_file(char **cmd, )
//  {
// 	 dup2(, int newfd)
	 
//  }


int main (int ac, char **av, char **env)
{
	int		i;
	char	*cmd;
	int		pid1;
	int		p[2];
	// int		pid2;

	i = 0;
	if (ac != 3)
	    return (EXIT_FAILURE);
	cmd = get_command(av, env);
	// printf("%s\n", cmd);
	if (cmd == NULL)
	    return (EXIT_FAILURE);
	pid1 = fork();
	if (pid1 == 0)
	{
		pipe(p);
		int	fd = open(av[1], O_RDWR | O_APPEND, 0777);
		dup2(fd, 1);
		close(p[0]);
		dup2(p[1], 0);
		if (execve(cmd, "ls", env) == -1)
			perror("Could not execve");
	}
	return (EXIT_SUCCESS);
}
