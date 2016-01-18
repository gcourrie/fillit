/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_and_clear_form.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:48:00 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 20:15:52 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/form.h"
#include "../includes/fillit.h"

void	clear_form(t_map *maplist, int x)
{
	int	nbr;

	nbr = 0;
	while (g_clearform[nbr].form != maplist->map[x] && g_clearform[nbr].form)
		nbr++;
	if (g_clearform[nbr].form)
		g_clearform[nbr].f(maplist, x);
}

int		creat_form(t_map *maplist, char *str, int i, int x)
{
	int	nbr;

	nbr = 0;
	while (g_creatform[nbr].form != str[i] && g_creatform[nbr].form)
		nbr++;
	if (g_creatform[nbr].form)
		return (g_creatform[nbr].f(maplist, i, x));
	return (0);
}
