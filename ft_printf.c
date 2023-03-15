/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:50 by enramire          #+#    #+#             */
/*   Updated: 2023/03/15 07:07:35 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_switch_case(va_list *ap, char opt, int *i, int *ret)
{
	if (opt == 'c')
		ft_putchar_fd(va_arg(*ap, int), ret);
	else if (opt == 's')
		ft_putstr_fd(va_arg(*ap, char *), ret);
	else if (opt == 'p')
		ft_putptr_x_fd(va_arg(*ap, unsigned long long int), ret, 0);
	else if ((opt == 'd') || (opt == 'i'))
		ft_putnbr_fd(va_arg(*ap, int), ret);
	else if (opt == 'u')
		ft_putnbr_u_fd(va_arg(*ap, unsigned int), ret);
	else if ((opt == 'x') || (opt == 'X'))
		ft_putnbr_xx_fd(va_arg(*ap, unsigned int), ret, opt);
	else if (opt == '%')
		ft_putchar_fd('%', ret);
	else
		(*i)--;
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ap;
	int		ret;

	va_start (ap, str);
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_switch_case(&ap, str[i + 1], &i, &ret);
			i++;
		}
		else
			ft_putchar_fd(str[i], &ret);
		i++;
	}
	va_end (ap);
	return (ret);
}
