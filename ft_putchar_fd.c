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

/*
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaneda <kaneda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:38 by enramire          #+#    #+#             */
/*   Updated: 2023/03/06 10:10:17 by kaneda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	int	expected_len;
	int	bytes_written;

	expected_len = 0;
	bytes_written = 0;
	expected_len = ft_strlen(c);
	bytes_written = write(fd, &c, expected_len);
	if (bytes_written == expected_len)
		return (expected_len);
	else
		return (-1);
}
*/
