/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_form_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:37:52 by gcourrie          #+#    #+#             */
/*   Updated: 2015/12/21 17:51:00 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	clear_p(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size - 1] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size + 1] = '.';
}

void	clear_q(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + 1] = '.';
	maplist->map[x + 2] = '.';
	maplist->map[x + maplist->size + 1] = '.';
}

void	clear_r(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size - 1] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
}

void	clear_s(t_map *maplist, int x)
{
	maplist->map[x] = '.';
	maplist->map[x + maplist->size] = '.';
	maplist->map[x + maplist->size + 1] = '.';
	maplist->map[x + (maplist->size * 2)] = '.';
}
