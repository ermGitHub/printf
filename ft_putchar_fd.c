/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:38 by enramire          #+#    #+#             */
/*   Updated: 2023/03/06 11:00:38 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int *ret)
{
	int		expected_len;
	int		bytes_written;
	char	s[2];

	expected_len = 0;
	bytes_written = 0;
	s[0] = c;
	s[1] = '\0';
	expected_len = (ft_strlen(s));
	bytes_written = write(1, &c, expected_len);
	if (bytes_written == expected_len)
		*ret += expected_len;
	else
		*ret = -1;
}
