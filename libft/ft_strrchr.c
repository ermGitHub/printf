/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:26:53 by enramire          #+#    #+#             */
/*   Updated: 2022/10/24 12:57:03 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pat;
	int		i;

	pat = (char *)s;
	i = ft_strlen(pat);
	while (i > 0)
	{
		if (pat[i] == (char)c)
			return ((char *)&pat[i]);
		i--;
	}
	if ((char)c == pat[i])
		return ((char *)&pat[i]);
	return (NULL);
}
