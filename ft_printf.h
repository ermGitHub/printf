/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:40 by enramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:29:30 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_putchar_fd(char c, int *ret);
void	ft_putstr_fd(char *s, int *ret);
void	ft_putnbr_u_fd(unsigned int ui, int *ret);
void	ft_putnbr_xx_fd(unsigned int n, int *ret, char x);
void	ft_putnbr_fd(int n, int *ret);
void	ft_putptr_x_fd(unsigned long long int n, int *ret, int first);
void	ft_write_test(int resw, int len, int *ret);
size_t	ft_strlen(const char *s);

#endif
