/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:48:40 by enramire          #+#    #+#             */
/*   Updated: 2022/10/10 19:39:40 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		k;
	size_t		lng_dst;
	size_t		lng_src;
	char		*srce;

	srce = (char *)src;
	i = 0;
	lng_dst = ft_strlen(dst);
	k = lng_dst;
	lng_src = ft_strlen(srce);
	if (dstsize > 0)
	{
		while (srce[i] != '\0' && (k + 1) < dstsize)
		{
			dst[k] = srce[i];
			k++;
			i++;
		}
		dst[k] = '\0';
	}
	if (dstsize > lng_dst)
		return (lng_src + lng_dst);
	else
		return (lng_src + dstsize);
}
