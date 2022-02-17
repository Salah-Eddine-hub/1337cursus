/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:02:39 by sharrach          #+#    #+#             */
/*   Updated: 2022/02/10 17:02:41 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample()
{
	int x = fork();

	if (x == 0)
		printf("Child has x = %d\n", getpid());
	else
		printf("Parent has x = %d\n", getpid());
}
int main()
{
	forkexample();
	return 0;
}
