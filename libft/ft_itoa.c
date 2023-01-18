/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:13:32 by enramire          #+#    #+#             */
/*   Updated: 2023/01/18 19:01:27 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long int n, int size)
{
	int	d;
	int	m;

	d = 1;
	m = 0;
	while (d != 0)
	{
		d = (n / 10);
		m = (n % 10);
		n = n / 10;
		size++;
	}
	return (size);
}

static int	ft_fill_malloc(char *itoa, long int n, int size)
{
	int	d;
	int	m;

	d = 1;
	m = 0;
	while (d != 0)
	{
		d = (n / 10);
		m = (n % 10);
		itoa[size] = m + '0';
		n = n / 10;
		size--;
	}
	return (size);
}

static char	*ft_create_malloc(char *itoa, int neg, long int nbr, int size)
{
	size = ft_size(nbr, size);
	itoa = malloc(sizeof (char) * size + 1);
	if (!itoa)
		return (NULL);
	if (neg)
		itoa[0] = '-';
	ft_fill_malloc(itoa, nbr, size - 1);
	itoa[size] = '\0';
	return (itoa);
}

char	*ft_itoa(int n)
{
	int			neg;
	int			size;
	char		*itoa;
	int			i;
	long int	nbr;

	neg = 0;
	size = 0;
	i = 0;
	itoa = NULL;
	if (n >= -2147483648 && n <= 2147483647)
	{
		nbr = (long int)n;
		if (n < 0)
		{
			neg = 1;
			nbr = nbr * -1;
			size++;
		}
		return (ft_create_malloc(itoa, neg, nbr, size));
	}
	else
		return (NULL);
}
