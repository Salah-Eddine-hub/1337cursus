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

char	*add_cmd_path(char *cmd, char **s_paths)
{
	int 	i;
	char	*path;
	
	i = 0;
	while(s_paths[i] != NULL)
	{
		path = ft_strdup(s_paths[i]);
		s_paths[i] = ft_strjoin(s_paths[i], "/");
		s_paths[i] = ft_strjoin(s_paths[i], cmd);
		// printf("%s\n", s_paths[i]);
		if (access(s_paths[i], X_OK) == 0)
			return (s_paths[i]);
		free(path);
		i++;
	}
	return (NULL);
}
