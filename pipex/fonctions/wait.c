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
