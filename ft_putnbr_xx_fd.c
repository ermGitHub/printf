/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:22:53 by enramire          #+#    #+#             */
/*   Updated: 2023/03/18 17:54:43 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xx_fd(unsigned int n, int *ret, char x)
{
	char	*hex;
	int		err;

	err = 0;
	if (x == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n == 0)
	{
		err = ft_putchar_fd('0', ret);
		return (err);
	}
	if (n > 15)
		ft_putnbr_xx_fd((n / 16), ret, x);
	err = ft_putchar_fd(hex[n % 16], ret);
	return (err);
}
