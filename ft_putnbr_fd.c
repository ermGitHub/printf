/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:32:33 by enramire          #+#    #+#             */
/*   Updated: 2023/03/26 16:00:22 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int *ret)
{
	long int	nbr;
	int			err;

	nbr = 0;
	err = 0;
	nbr = (long int) n;
	if (nbr < 0)
	{
		err = ft_putchar_fd('-', ret);
		if (err == -1)
			return (err);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		err = ft_putnbr_fd(nbr / 10, ret);
		if (err == -1)
			return (err);
	}
	err = ft_putchar_fd((nbr % 10 + '0'), ret);
	return (err);
}
