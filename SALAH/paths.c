/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:38 by ilkridah          #+#    #+#             */
/*   Updated: 2022/03/02 16:19:48 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_paths(char **env)
{
	char	**paths;
	int		i;

	i = 0;
	while (!ft_strnstr(env[i], "PATH", 4))
			i++;
	paths = ft_split(env[i] + 5, ':');
	return (paths);
}

char	*my_path(char *cmd, char **env)
{
	char	**paths;
	char	*path;
	char	*slash;
	int		i;

	i = 0 ;
	paths = get_paths(env);
	while (paths[i])
	{
		slash = ft_strjoin(paths[i], "/");
		path = ft_strjoin(slash, cmd);
		free(slash);
		if (!access(path, X_OK))
		{
			free_split(paths);
			return (path);
		}
		free(path);
		i++;
	}
	return (0);
}
