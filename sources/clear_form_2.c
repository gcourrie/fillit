/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_form_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:21:36 by gcourrie          #+#    #+#             */
/*   Updated: 2015/12/21 17:50:33 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	clear_f(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size + 1] = '.';
	maplist->map[x + maplist->size + 2] = '.';
}

void	clear_g(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size - 2] = '.';
	maplist->map[x + maplist->size - 1] = '.';
	maplist->map[x + maplist->size] = '.';
}

void	clear_h(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
}

void	clear_i(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
	maplist->map[x + (maplist->size * 2) - 1] = '.';
}

void	clear_j(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size - 1] = '.';
	maplist->map[x + (maplist->size * 2) - 1] = '.';
}
