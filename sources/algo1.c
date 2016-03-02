/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:28:58 by gcourrie          #+#    #+#             */
/*   Updated: 2016/03/02 09:52:46 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	ft_sqrt(size_t a)
{
	int		i;

	i = 1;
	while ((i * i) < (int)a)
		i++;
	return (i);
}

void		ft_affichage(char *str, t_map *maplist)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i % maplist->size == 0 && i != 0)
			ft_putchar('\n');
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void		algo_reso(char *str)
{
	t_map	*maplist;
	char	*ret;

	ret = NULL;
	if (!(maplist = (t_map *)malloc(sizeof(t_map))))
		return ;
	if (ft_strlen(str) == 1)
		maplist->size = ft_sqrt(ft_strlen(str)) * 4;
	else
		maplist->size = ft_sqrt(ft_strlen(str)) * 3;
	maplist->map = ft_table_creator(maplist->size);
	while (algo_rec(maplist, str, 0, 0) == 1)
	{
		maplist->size -= 1;
		if (ret)
			free(ret);
		ret = maplist->map;
		maplist->map = ft_table_creator(maplist->size);
	}
	maplist->size += 1;
	ft_affichage(ret, maplist);
}
