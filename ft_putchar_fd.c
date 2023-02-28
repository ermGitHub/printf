/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:38 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:34:24 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int *ret)
{
	int	sum;

	sum = 0;
	sum = *ret;
	ft_write_test(write(1, &c, 1), ft_strlen(&c), ret);
	if (*ret == -1)
		return ;
	sum++;
	*ret = sum;
}
