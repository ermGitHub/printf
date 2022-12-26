/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:41:15 by enramire          #+#    #+#             */
/*   Updated: 2022/12/07 17:17:29 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*this;

	if (lst)
	{
		while (*lst)
		{
			this = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = this;
		}
	}
}
