/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_form_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:14:28 by gcourrie          #+#    #+#             */
/*   Updated: 2015/12/21 17:50:18 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	clear_a(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size + 1] = '.';
}

void	clear_b(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
	maplist->map[x + (maplist->size * 2) + 1] = '.';
}

void	clear_c(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + 1 + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2) + 1] = '.';
}

void	clear_d(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + 2] = '.';
	maplist->map[x + maplist->size + 2] = '.';
}

void	clear_e(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + 2] = '.';
	maplist->map[x + maplist->size] = '.';
}
