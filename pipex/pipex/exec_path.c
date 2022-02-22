/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:24:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/21 17:24:30 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "pipex.h"

char	*exec_path(char *cmd, char **s_paths)
{
	int 	i;
	char	*path;
	
	i = 0;
	while(s_paths[i] != NULL)
	{
		path = ft_strdup(s_paths[i]);
		s_paths[i] = ft_strjoin(s_paths[i], "/");
		s_paths[i] = ft_strjoin(s_paths[i], cmd);
		if (access(s_paths[i], X_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	return (NULL);
}
