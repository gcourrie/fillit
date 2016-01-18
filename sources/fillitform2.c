/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillitform2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:13:44 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:14:01 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		form_f(char *str, size_t n)
{
	if ((n + 8) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[6] == '#' && str[7] == '#')
		return (1);
	return (0);
}

int		form_g(char *str, size_t n)
{
	if ((n + 6) >= 21)
		return (0);
	if (str[0] == '#' && str[3] == '#' &&
		str[4] == '#' && str[5] == '#')
		return (1);
	return (0);
}

int		form_h(char *str, size_t n)
{
	if ((n + 11) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[5] == '#' && str[10] == '#')
		return (1);
	return (0);
}

int		form_i(char *str, size_t n)
{
	if ((n + 11) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[9] == '#' && str[10] == '#')
		return (1);
	return (0);
}

int		form_j(char *str, size_t n)
{
	if ((n + 10) >= 21)
		return (0);
	if (str[0] == '#' && str[4] == '#' &&
		str[5] == '#' && str[9] == '#')
		return (1);
	return (0);
}
