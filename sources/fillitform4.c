/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillitform4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:30:22 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 15:06:13 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		form_p(char *str, size_t n)
{
	if ((n + 7) >= 21)
		return (0);
	if (str[0] == '#' && str[4] == '#' &&
		str[5] == '#' && str[6] == '#')
		return (1);
	return (0);
}

int		form_q(char *str, size_t n)
{
	if ((n + 7) >= 21)
		return (0);
	if (str[0] == '#' && str[1] == '#' &&
		str[2] == '#' && str[6] == '#')
		return (1);
	return (0);
}

int		form_r(char *str, size_t n)
{
	if ((n + 11) >= 21)
		return (0);
	if (str[0] == '#' && str[4] == '#' &&
		str[5] == '#' && str[10] == '#')
		return (1);
	return (0);
}

int		form_s(char *str, size_t n)
{
	if ((n + 11) >= 21)
		return (0);
	if (str[0] == '#' && str[5] == '#' &&
		str[6] == '#' && str[10] == '#')
		return (1);
	return (0);
}
