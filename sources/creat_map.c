/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:48:14 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:20:23 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char		*ft_table_creator(int map_size)
{
	char	*map;
	int		i;

	i = 0;
	if (!(map = (char *)malloc(sizeof(char) * map_size * map_size + 1)))
		return (NULL);
	while (i < map_size * map_size)
		map[i++] = '.';
	map[i] = '\0';
	return (map);
}
