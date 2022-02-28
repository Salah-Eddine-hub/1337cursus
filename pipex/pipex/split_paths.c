/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_paths.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:41:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/28 13:42:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**split_paths(char *env[])
{
	int		i;
	char	**s_paths;

	i = 0;
	while (!ft_strnstr(env[i], "PATH=", 5))
		i++;
	s_paths = ft_split(&env[i][5], ':');
	return (s_paths);
}
