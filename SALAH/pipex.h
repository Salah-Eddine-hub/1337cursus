/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:46:13 by sharrach          #+#    #+#             */
/*   Updated: 2022/03/02 16:21:33 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <sys/errno.h>
# include <fcntl.h>

char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	first_child(int *pipefd, int *fd, char **av, char **env);
void	second_child(int *pipefd, int *fd, char **av, char **env);
char	**get_paths(char **env);
char	*my_path(char *cmd, char **env);
void	finish(char *x);
void	free_split(char **split);
void	form1(void);
void	cmd_not_found(char **cmd);


#endif