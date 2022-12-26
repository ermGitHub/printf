/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:07:33 by fxadmin           #+#    #+#             */
/*   Updated: 2022/10/10 18:45:37 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		lng;
	char		*srce;

	srce = (char *)src;
	i = 0;
	lng = 0;
	lng = ft_strlen(src);
	if (dstsize > 0)
	{
		while (srce[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = srce[i];
			i++;
		}
			dst[i] = '\0';
	}
	return (lng);
}
