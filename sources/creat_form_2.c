/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_form_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfouques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:23:57 by hfouques          #+#    #+#             */
/*   Updated: 2016/01/18 15:31:21 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		creat_f(t_map *maplist, int i, int x)
{
	int	a;
	int	size;

	a = 0;
	size = maplist->size;
	while (a < size + 3)
	{
		if (!(maplist->map[x + a]))
			return (0);
		a++;
	}
	if (maplist->map[x] == '.' && maplist->map[x + size] == '.'
		&& maplist->map[x + size + 1] == '.' &&
		maplist->map[x + size + 2] == '.' && (x / size) == ((x + 2) / size))
	{
		maplist->map[x] = i + 'A';
		maplist->map[x + size] = i + 'A';
		maplist->map[x + size + 1] = i + 'A';
		maplist->map[x + size + 2] = i + 'A';
		return (1);
	}
	return (0);
}

int		creat_g(t_map *maplist, int i, int x)
{
	int	a;
	int	size;

	a = 0;
	size = maplist->size;
	while (a < size + 3)
	{
		if (!(maplist->map[x + a]))
			return (0);
		a++;
	}
	if (maplist->map[x + 2] == '.' && maplist->map[x + size] == '.'
		&& maplist->map[x + size + 1] == '.'
		&& maplist->map[x + size + 2] == '.'
		&& (x / size) == ((x + 2) / size))
	{
		maplist->map[x + 2] = i + 'A';
		maplist->map[x + size] = i + 'A';
		maplist->map[x + size + 1] = i + 'A';
		maplist->map[x + size + 2] = i + 'A';
		return (1);
	}
	return (0);
}

int		creat_h(t_map *maplist, int i, int x)
{
	int	a;
	int	size;

	a = 0;
	size = maplist->size;
	while (a < size * 2 + 2)
	{
		if (!(maplist->map[x + a]))
			return (0);
		a++;
	}
	if (maplist->map[x] == '.' && maplist->map[x + 1] == '.'
		&& maplist->map[x + size + 1] == '.'
		&& maplist->map[x + size * 2 + 1] == '.'
		&& (x / size) == ((x + 1) / size))
	{
		maplist->map[x] = i + 'A';
		maplist->map[x + 1] = i + 'A';
		maplist->map[x + size + 1] = i + 'A';
		maplist->map[x + size * 2 + 1] = i + 'A';
		return (1);
	}
	return (0);
}

int		creat_i(t_map *maplist, int i, int x)
{
	int	a;
	int	size;

	a = 0;
	size = maplist->size;
	while (a < size * 2 + 2)
	{
		if (!(maplist->map[x + a]))
			return (0);
		a++;
	}
	if (maplist->map[x + 1] == '.' && maplist->map[x + 1 + size] == '.'
		&& maplist->map[x + size * 2 + 1] == '.'
		&& maplist->map[x + size * 2] == '.'
		&& (x / size) == ((x + 1) / size))
	{
		maplist->map[x + 1] = i + 'A';
		maplist->map[x + 1 + size] = i + 'A';
		maplist->map[x + 1 + size * 2] = i + 'A';
		maplist->map[x + size * 2] = i + 'A';
		return (1);
	}
	return (0);
}

int		creat_j(t_map *maplist, int i, int x)
{
	int	a;
	int	size;

	a = 0;
	size = maplist->size;
	while (a < size * 2 + 2)
	{
		if (!(maplist->map[x + a]))
			return (0);
		a++;
	}
	if (maplist->map[x + 1] == '.' && maplist->map[x + size] == '.'
		&& maplist->map[x + size + 1] == '.'
		&& maplist->map[x + size * 2] == '.'
		&& (x / size) == ((x + 1) / size))
	{
		maplist->map[x + 1] = i + 'A';
		maplist->map[x + size] = i + 'A';
		maplist->map[x + size + 1] = i + 'A';
		maplist->map[x + size * 2] = i + 'A';
		return (1);
	}
	return (0);
}
