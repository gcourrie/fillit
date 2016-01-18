/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:28:56 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 20:16:19 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

int			ft_check_form(char *s1, char *form)
{
	char	*s2;
	int		i;
	size_t	n;

	i = 0;
	s2 = s1;
	while (*s2 != '#' && *s2)
		s2++;
	while (*form)
		form++;
	n = s2 - s1;
	if (*s2)
	{
		while (g_lst[i].f(s2, n) == 0 && g_lst[i].form)
			i++;
		if (g_lst[i].f(s2, n) != 0 && g_lst[i].form)
		{
			*form = g_lst[i].form;
			return (1);
		}
	}
	return (0);
}
