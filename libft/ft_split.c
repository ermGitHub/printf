/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:11:28 by enriquerami       #+#    #+#             */
/*   Updated: 2022/11/29 17:43:37 by enramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_items(char const *s, char c)
{
	int	items;
	int	i;
	int	new;

	items = 0;
	i = 0;
	new = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && new == 0)
		{
			new = 1;
			items++;
		}
		else if (s[i] == c)
			new = 0;
		i++;
	}
	return (items);
}

static int	ft_get_len_word(char const *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int	ft_free_submalloc(char **result, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free (result[i]);
		i++;
	}
	return (-1);
}

int	ft_get_items(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	new;

	i = 0;
	j = 0;
	new = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && new == 0)
		{
			new = 1;
			result[j] = ft_substr(s, i, ft_get_len_word(s, i, c));
			if (!result[j])
			{
				ft_free_submalloc(result, j);
				return (-1);
			}
			j++;
		}
		else if (s[i] == c)
			new = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		items;
	char	**result;
	int		err;

	items = ft_count_items(s, c);
	result = malloc(sizeof (char *) * (items + 1));
	if (!result)
		return (NULL);
	result [items] = NULL;
	err = ft_get_items(s, c, result);
	if (err == -1)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
