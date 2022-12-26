/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:29:06 by enramire          #+#    #+#             */
/*   Updated: 2022/10/24 19:37:29 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cps;
	int		lcp;
	int		i;

	lcp = ft_strlen(s1);
	cps = (char *)malloc(sizeof (char) * (lcp + 1));
	if (!cps)
		return (NULL);
	i = 0;
	while (i < lcp)
	{
		cps[i] = s1[i];
		i++;
	}
	cps[i] = '\0';
	return (cps);
}
