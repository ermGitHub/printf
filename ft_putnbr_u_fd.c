/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:48:10 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 10:05:52 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u_fd(unsigned int ui, int *ret)
{
	if (ui >= 10)
		ft_putnbr_u_fd(ui / 10, ret);
	ft_putchar_fd(ui % 10 + '0', ret);
}
