/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:48:00 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:28:20 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/fillit.h>

int		algo_rec(t_map *maplist, char *str, int i, int x)
{
	int	a;

	a = creat_form(maplist, str, i, x);
	if (str[i] == '\0')
		return (1);
	if (a != 1 && maplist->map[x])
		if (algo_rec(maplist, str, i, x + 1) == 1)
			return (1);
	if (maplist->map[x] == '\0')
		return (0);
	if (a == 1)
	{
		if (algo_rec(maplist, str, i + 1, 0) == 1)
			return (1);
		else
		{
			clear_form(maplist, x);
			if (algo_rec(maplist, str, i, x + 1) == 1)
				return (1);
		}
	}
	return (0);
}
