/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:32:33 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:04:44 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int *ret)
{
	long int	nbr;
	int			sum;

	nbr = 0;
	sum = 0;
	nbr = (long int) n;
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", ret);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', ret);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, ret);
	ft_putchar_fd((nbr % 10 + '0'), ret);
}
