/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:32:33 by enramire          #+#    #+#             */
/*   Updated: 2023/03/18 17:55:08 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int *ret)
{
	long int	nbr;
	int			sum;
	int			err;

	nbr = 0;
	sum = 0;
	err = 0;
	nbr = (long int) n;
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", ret);
		return (err);
	}
	if (nbr < 0)
	{
		if (err != -1)
		{
			err = ft_putchar_fd('-', ret);
			nbr *= -1;
		}
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, ret);
	err = ft_putchar_fd((nbr % 10 + '0'), ret);
	return (err);
}
