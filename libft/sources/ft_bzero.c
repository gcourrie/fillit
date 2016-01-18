/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:59:45 by gcourrie          #+#    #+#             */
/*   Updated: 2015/12/02 18:37:48 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				ft_bzero(void *s1, size_t n)
{
	register char	*t;

	t = s1;
	while (n != 0)
	{
		*t++ = 0;
		n--;
	}
}