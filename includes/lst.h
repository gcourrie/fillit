/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:55:17 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 20:13:34 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# include "fillit.h"

typedef	struct	s_form
{
	char		form;
	int			(*f)(char *str, size_t n);
}				t_form;

int				form_a(char *str, size_t n);
int				form_b(char *str, size_t n);
int				form_c(char *str, size_t n);
int				form_d(char *str, size_t n);
int				form_e(char *str, size_t n);
int				form_f(char *str, size_t n);
int				form_g(char *str, size_t n);
int				form_h(char *str, size_t n);
int				form_i(char *str, size_t n);
int				form_j(char *str, size_t n);
int				form_k(char *str, size_t n);
int				form_l(char *str, size_t n);
int				form_m(char *str, size_t n);
int				form_n(char *str, size_t n);
int				form_o(char *str, size_t n);
int				form_p(char *str, size_t n);
int				form_q(char *str, size_t n);
int				form_r(char *str, size_t n);
int				form_s(char *str, size_t n);

t_form			g_lst[] =
{
	{'a', &form_a},
	{'b', &form_b},
	{'c', &form_c},
	{'d', &form_d},
	{'e', &form_e},
	{'f', &form_f},
	{'g', &form_g},
	{'h', &form_h},
	{'i', &form_i},
	{'j', &form_j},
	{'k', &form_k},
	{'l', &form_l},
	{'m', &form_m},
	{'n', &form_n},
	{'o', &form_o},
	{'p', &form_p},
	{'q', &form_q},
	{'r', &form_r},
	{'s', &form_s},
	{'\0', &form_a}
};

#endif
