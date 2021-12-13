/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transfer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:10:58 by sharrach          #+#    #+#             */
/*   Updated: 2021/12/13 10:10:59 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_transfer(va_list arg, char c)
{
	if (c == 'c')
		return (ft_convert_c(arg));
	else if (c == 's')
		return (ft_convert_s(arg));
	else if (c == 'd' || c == 'i')
		return (ft_convert_di(arg));
	else if (c == 'x')
		return (ft_convert_x(arg));
	else if (c == 'X')
		return (ft_convert_xx(arg));
	else if (c == 'p')
		return (ft_convert_p(arg));
	else if (c == 'u')
		return (ft_convert_u(arg));
	else
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
