/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:58:25 by enramire          #+#    #+#             */
/*   Updated: 2022/12/05 16:15:07 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int				len;

	if (lst)
	{
		len = 1;
		while (lst -> next)
		{
			lst = lst -> next;
			len++;
		}
	}
	else
		return (0);
	return (len);
}
