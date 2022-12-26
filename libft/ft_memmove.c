/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:03:40 by enramire          #+#    #+#             */
/*   Updated: 2022/10/24 13:06:10 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst || src)
	{
		if (dst > src)
		{
			while (len > 0)
			{
				((char *)dst)[len - 1] = ((char *)src)[len - 1];
				len --;
			}
		}
		else
		{
			while (i < len)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
		}
	}
	return (dst);
}
