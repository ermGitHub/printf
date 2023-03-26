/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:50 by enramire          #+#    #+#             */
/*   Updated: 2023/03/18 17:44:35 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switch_case(va_list *ap, char opt, int *ret)
{
	int	err;

	err = 0;
	if (opt == 'c')
		err = ft_putchar_fd(va_arg(*ap, int), ret);
	else if (opt == 's')
		err = ft_putstr_fd(va_arg(*ap, char *), ret);
	else if (opt == 'p')
		err = ft_putptr_x_fd(va_arg(*ap, unsigned long long int), ret, 0);
	else if ((opt == 'd') || (opt == 'i'))
		err = ft_putnbr_fd(va_arg(*ap, int), ret);
	else if (opt == 'u')
		err = ft_putnbr_u_fd(va_arg(*ap, unsigned int), ret);
	else if ((opt == 'x') || (opt == 'X'))
		err = ft_putnbr_xx_fd(va_arg(*ap, unsigned int), ret, opt);
	else if (opt == '%')
		err = ft_putchar_fd('%', ret);
	return (err);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ap;
	int		ret;
	int		err;

	va_start (ap, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			err = ft_switch_case(&ap, str[i + 1], &ret);
			i++;
		}
		else
			err = ft_putchar_fd(str[i], &ret);
		i++;
	}
	if (err == -1)
		ret = err;
	va_end (ap);
	return (ret);
}
