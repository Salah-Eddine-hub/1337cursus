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
	cmd[0] = ft_strjoin(ft_strdup("/"), cmd[0]);
	cmd[0] = ft_strjoin(path, cmd[0]);
	return (cmd);
}

int main (int ac, char **av, char **env)
{
	int		i;
	char	**cmd;

	i = 0;
	(void)ac;
	// if (ac != 5)
	//     return (EXIT_FAILURE);
	cmd = get_command(av, env);
	if (cmd == NULL)
	    return (EXIT_FAILURE);
	if (execve(cmd[0], cmd, env) == -1)
		perror("Could not execve");
	return (EXIT_SUCCESS);
}
