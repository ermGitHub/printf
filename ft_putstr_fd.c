/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:14:09 by enramire          #+#    #+#             */
/*   Updated: 2023/03/18 17:50:56 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int *ret)
{
	int	i;
	int	res;
	int	err;

	res = 0;
	i = 0;
	err = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			if (err != -1)
			{
				err = ft_putchar_fd(s[i], ret);
				i++;
			}
		}
	}
	else
	{
		err = write (1, "(null)", 6);
			*ret += 6;
	}
	return (err);
}
