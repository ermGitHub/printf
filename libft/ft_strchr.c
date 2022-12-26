/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxadmin <fxadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:49:17 by fxadmin           #+#    #+#             */
/*   Updated: 2022/10/24 12:41:13 by fxadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pat;
	int		i;

	pat = (char *)s;
	i = 0;
	while (pat[i])
	{
		if (pat[i] == (char)c)
			return ((char *)&pat[i]);
		i++;
	}
	if ((char)c == pat[i])
		return ((char *)&pat[i]);
	return (NULL);
}
