/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_x_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:47:59 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:08:08 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_x_fd(unsigned long long int n, int *ret, int first)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (first == 0)
	{
		ft_putstr_fd("0x", ret);
		first = 1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', ret);
		return ;
	}
	if (n > 15)
		ft_putptr_x_fd((n / 16), ret, first);
	ft_putchar_fd(hex[n % 16], ret);
}
