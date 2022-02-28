/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_cmd_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:24:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/28 13:34:52 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*add_cmd_path(char *cmd, char **s_paths)
{
	int		i;
	char	*path;

	i = 0;
	while (s_paths[i] != NULL)
	{
		path = ft_strdup(s_paths[i]);
		s_paths[i] = ft_strjoin(s_paths[i], "/");
		s_paths[i] = ft_strjoin(s_paths[i], cmd);
		if (access(s_paths[i], X_OK) == 0)
			return (s_paths[i]);
		free(path);
		i++;
	}
	return (NULL);
}
