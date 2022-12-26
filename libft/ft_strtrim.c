/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enriqueramirez <enriqueramirez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:12:17 by enramire          #+#    #+#             */
/*   Updated: 2022/11/03 20:08:48 by enriquerami      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*sstr;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	sstr = (char *)malloc(sizeof (char) * ((end - start) + 1));
	if (!sstr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		sstr[i] = s1[start];
		start++;
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}
