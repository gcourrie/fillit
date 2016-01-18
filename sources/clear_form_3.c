/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_form_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:32:59 by gcourrie          #+#    #+#             */
/*   Updated: 2015/12/21 17:50:47 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	clear_k(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size + 1] = '.';
	maplist->map[x + (maplist->size * 2) + 1] = '.';
}

void	clear_l(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + maplist->size + 1] = '.';
	maplist->map[x + maplist->size + 2] = '.';
}

void	clear_m(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size - 1] = '.';
}

void	clear_n(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
	maplist->map[x + (maplist->size * 3)] = '.';
}

void	clear_o(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + 2] = '.';
	maplist->map[x + 3] = '.';
}
