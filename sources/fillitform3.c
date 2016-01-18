/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillitform3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:22:47 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:09:34 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		form_k(char *str, size_t n)
{
	if ((n + 12) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[6] == '#' && str[11] == '#')
		return (1);
	return (0);
}

int		form_l(char *str, size_t n)
{
	if ((n + 8) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[6] == '#' && str[7] == '#')
		return (1);
	return (0);
}

int		form_m(char *str, size_t n)
{
	if ((n + 6) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[4] == '#' && str[5] == '#')
		return (1);
	return (0);
}

int		form_n(char *str, size_t n)
{
	if ((n + 16) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[10] == '#' && str[15] == '#')
		return (1);
	return (0);
}

int		form_o(char *str, size_t n)
{
	if ((n + 4) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[2] == '#' && str[3] == '#')
		return (1);
	return (0);
}
