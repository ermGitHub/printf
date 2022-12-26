/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaneda <kaneda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:58:14 by kaneda            #+#    #+#             */
/*   Updated: 2022/11/11 14:04:04 by kaneda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			size;
	unsigned int	i;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	new = malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
