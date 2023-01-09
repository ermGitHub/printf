/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:22:26 by enramire          #+#    #+#             */
/*   Updated: 2022/09/29 16:23:48 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	r;

	r = c;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		r = c;
	else
		r = 0;
	return (r);
}