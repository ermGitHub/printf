/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:14:09 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 12:39:49 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int *ret)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], ret);
			i++;
		}
	}
	else
	{
		write (1, "(null)", 6);
		sum = *ret + 6;
		*ret = sum;
		return ;
	}
}
