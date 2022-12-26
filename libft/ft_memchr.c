/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:22:01 by enriquerami       #+#    #+#             */
/*   Updated: 2022/10/24 13:58:51 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pat;
	size_t	i;

	i = 0;
	pat = (char *)s;
	if (n > 0)
	{
		while (i < n)
		{
			if (pat[i] == (char)c)
				return (&pat[i]);
			i++;
		}
	}
	return (NULL);
}
