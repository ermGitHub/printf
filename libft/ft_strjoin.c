/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:50:17 by fxadmin           #+#    #+#             */
/*   Updated: 2022/11/29 13:59:18 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cpi(char const *s1, char const *s2, char *st, unsigned int len)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (i < ft_strlen(s1))
	{
		st[i] = s1[i];
		i++;
	}
	k = 0;
	while (i < len)
	{
		st[i] = s2[k];
		k++;
		i++;
	}
	st[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	char			*st;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	st = (char *)malloc(sizeof (char) * (len + 1));
	if (!st)
		return (NULL);
	ft_cpi(s1, s2, st, len);
	return (st);
}
