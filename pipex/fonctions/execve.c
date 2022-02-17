/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:41:20 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/15 06:41:22 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp) 
{
  printf("Main program started\n");
  char* args[] = { "/bin/cat", argv[1], NULL };
  if (execve(args[0], args, envp) == -1)
    perror("Could not execve");
  printf("hh\n");
  return 1;
}