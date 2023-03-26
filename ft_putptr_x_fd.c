/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_x_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:47:59 by enramire          #+#    #+#             */
/*   Updated: 2023/03/26 15:55:34 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_x_fd(unsigned long long int n, int *ret, int first)
{
	char	*hex;
	int		err;

	err = 0;
	hex = "0123456789abcdef";
	if (first == 0)
	{
		err = ft_putstr_fd("0x", ret);
		if (err == -1)
			return (err);
		first = 1;
	}
	if (n == 0)
	{
		err = ft_putchar_fd('0', ret);
		return (err);
	}
	if (n > 15)
	{
		err = ft_putptr_x_fd((n / 16), ret, first);
		if (err == -1)
			return (err);
	}
	err = ft_putchar_fd(hex[n % 16], ret);
	return (err);
}
