/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:06:44 by enramire          #+#    #+#             */
/*   Updated: 2022/10/24 10:20:10 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		k = 0;
		if (haystack[i] == needle[k])
		{
			while (i + k < len && haystack[i + k] == needle[k])
			{
				k++;
				if (!needle[k])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
