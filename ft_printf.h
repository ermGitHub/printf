/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:40 by enramire          #+#    #+#             */
/*   Updated: 2023/03/26 18:31:42 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar_fd(char c, int *ret);
int	ft_putstr_fd(char *s, int *ret);
int	ft_putnbr_u_fd(unsigned int ui, int *ret);
int	ft_putnbr_xx_fd(unsigned int n, int *ret, char x);
int	ft_putnbr_fd(int n, int *ret);
int	ft_putptr_x_fd(unsigned long long int n, int *ret, int first);

#endif
