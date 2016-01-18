/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillitform1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:45:51 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:15:32 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		form_a(char *str, size_t n)
{
	if ((n + 7) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[5] == '#' && str[6] == '#')
		return (1);
	return (0);
}

int		form_b(char *str, size_t n)
{
	if ((n + 12) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[10] == '#' && str[11] == '#')
		return (1);
	return (0);
}

int		form_c(char *str, size_t n)
{
	if ((n + 12) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[6] == '#' && str[11] == '#')
		return (1);
	return (0);
}

int		form_d(char *str, size_t n)
{
	if ((n + 8) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[2] == '#' && str[7] == '#')
		return (1);
	return (0);
}

int		form_e(char *str, size_t n)
{
	if ((n + 6) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[2] == '#' && str[5] == '#')
		return (1);
	return (0);
}
