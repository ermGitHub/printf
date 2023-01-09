/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaneda <kaneda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:03:58 by kaneda            #+#    #+#             */
/*   Updated: 2023/01/03 10:39:22 by kaneda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

static int	ft_size(int n)
{
	int	d;
	int	m;
	int	size;

	d = 1;
	m = 0;
	size = 0;
	while (d != 0)
	{
		d = (n / 16);
		m = (n % 16);
		n = n / 16;
		size++;
	}
	return (size);
}

int main (void)
{
	int		num;
	int		div;
	int		res;
	int		i;
	char	*hex;

	num = 1000;
	div = 0;
	res = 0;
	i = 0;
	hex = "A ver como la usaremos";
	printf("Decimal number: %i\n", num);
	printf("Size of num: %i\n", ft_size(num));
	return (0);
}
