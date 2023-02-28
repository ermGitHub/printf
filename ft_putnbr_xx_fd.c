/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:53 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 12:39:31 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_xx_fd(unsigned int n, int *ret, char x)
{
	char	*hex;

	if (x == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n == 0)
	{
		ft_putchar_fd('0', ret);
		return ;
	}
	if (n > 15)
		ft_putnbr_xx_fd((n / 16), ret, x);
	ft_putchar_fd(hex[n % 16], ret);
}
