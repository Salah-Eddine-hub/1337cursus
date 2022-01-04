/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:46:34 by sharrach          #+#    #+#             */
/*   Updated: 2022/01/04 17:42:53 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int hash[255];

    i = 0;
    while (i <= 255)
        hash[i++] = 0;
    i = 1;
    j = 0;
    if (ac == 3)
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                if (hash[(unsigned int )av[i][j]] == 0)
                {
                    write (1, &av[i][j], 1);
                    hash[(unsigned int )av[i][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
	return (0);
}
