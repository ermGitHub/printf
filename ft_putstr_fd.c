/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:14:09 by enramire          #+#    #+#             */
/*   Updated: 2023/03/26 15:36:28 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int *ret)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			err = ft_putchar_fd(s[i], ret);
			if (err != -1)
				i++;
			else
				return (err);
		}
	}
	else
	{
		err = write (1, "(null)", 6);
			*ret += 6;
	}
	return (err);
}
