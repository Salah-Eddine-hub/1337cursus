/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:53 by sharrach          #+#    #+#             */
/*   Updated: 2021/12/09 12:12:55 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_char(char *ap)
{
	va_list	args;
	int		i;
	
	i = 0;
	if(ap[i] == 'c')
		ft_putchar(va_arg(args, int))
}

int ft_printf(const char *ap, ...)
{
    va_list args;
    int     i;

    i = 0;
    va_start(args, ap);
    while(*ap)
    {
		if()
		i++;
		if(check_char())

    }
}

void	checkflag(int *len, int i, char *s, va_list list)
{
	if (s[i] == 'c')
		ft_putchar(va_arg(list, int), len);
	else if (s[i] == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(list, int), len);
	else if (s[i] == 'u')
		ft_putunbr(va_arg(list, unsigned int), len);
	else if (s[i] == 'p')
	{
		ft_putstr("0x", len);
		ft_hex(va_arg(list, unsigned long), len);
	}
	else if (s[i] == 'x')
		ft_hex(va_arg(list, unsigned int), len);
	else if (s[i] == 'X')
		ft_uhex(va_arg(list, unsigned int), len);
	else if (s[i] == '%')
		ft_putchar(s[i], len);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		len;
	char	*tmp;

	tmp = (char *)s;
	va_start(list, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i])
			{
				checkflag(&len, i, tmp, list);
				i++;
			}
		}
		else
			ft_putchar(s[i++], &len);
	}
	va_end(list);
	return (len);
}
