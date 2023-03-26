/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:48:10 by enramire          #+#    #+#             */
/*   Updated: 2023/03/18 17:53:42 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u_fd(unsigned int ui, int *ret)
{	int	err;

	err = 0;
	if (ui >= 10)
		ft_putnbr_u_fd(ui / 10, ret);
	err = ft_putchar_fd(ui % 10 + '0', ret);
	return (err);
}
