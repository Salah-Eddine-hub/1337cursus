/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:31:05 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/14 19:31:06 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    int id = fork();
    int n;
    
    if (id == 0)
        n = 1;
    else
        n = 6;
        if (id != 0)
            wait(NULL);
    for (int i = n; i < n + 5; i++)
    {
        printf("%d ", i);
    }
    if (id != 0)
    {
        printf("\n");
    }
}


static void	child(char **argv, char **env, int *fd)
{
	int		fdin;

	close(fd[0]);
	fdin = open(argv[1], O_RDONLY, 0777);
	if (fdin == -1)
		exiterror("Infile Error");
	dup2(fdin, STDIN_FILENO);
	close(fdin);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	exec_cmd(argv[2], env);
}

static void	father(char **argv, char **env, int *fd)
{
	int		fdout;

	close(fd[1]);
	fdout = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fdout == -1)
		exiterror("Outfile Error");
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	dup2(fdout, STDOUT_FILENO);
	close(fdout);
	execcmd(argv[3], env);
}