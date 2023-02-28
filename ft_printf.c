/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:50 by enramire          #+#    #+#             */
/*   Updated: 2023/02/21 21:21:18 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switch_case(va_list ap, char opt, int *ret)
{
	if (opt == 'c')
		ft_write_test((ft_putchar_fd(va_arg(ap, int), 1)), ret);
	if (opt == 's')
		ft_write_test(ft_putstr_fd(va_arg(ap, char *), 1), ret);
	if (opt == 'p')
		ft_write_test(ft_putptr_x_fd(va_arg(ap, unsigned long long int), 1, 0), ret);
	if ((opt == 'd') || (opt == 'i'))
		ft_write_test(ft_putnbr_fd(va_arg(ap, int), 1), ret);
	if (opt == 'u')
		ft_write_test(ft_putnbr_u_fd(va_arg(ap, unsigned int), 1), ret);
	if ((opt == 'x') || (opt == 'X'))
		ft_write_test(ft_putnbr_xx_fd(va_arg(ap, unsigned int), 1, opt), ret);
	if (opt == '%')
		ft_write_test(ft_putchar_fd('%', 1), ret);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ap;
	int		ret;

	va_start (ap, str);
	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_write_test((ft_switch_case(ap, str[i + 1], &ret)), &ret);
			i++;
		}
		else
			ft_write_test(ft_putchar_fd(str[i], 1), &ret);
		i++;
	}
	va_end (ap);
	return (ret);
}
