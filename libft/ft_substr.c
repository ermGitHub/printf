/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:19:57 by fxadmin           #+#    #+#             */
/*   Updated: 2022/11/28 19:33:45 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sbs;
	unsigned int		i;

	i = 0;
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	sbs = (char *)malloc(sizeof (char) * (len + 1));
	if (!sbs)
		return (NULL);
	while (i < (unsigned int) len)
	{
		sbs[i] = s[i + start];
		i++;
	}
	sbs[i] = '\0';
	return (sbs);
}
