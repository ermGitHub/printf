/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:37:14 by fxadmin           #+#    #+#             */
/*   Updated: 2022/10/24 17:53:45 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rsv;

	rsv = (void *)malloc(count * size);
	if (!rsv)
		return (NULL);
	ft_memset(rsv, 0, count * size);
	return (rsv);
}
