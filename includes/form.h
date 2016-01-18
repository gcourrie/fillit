/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 15:34:53 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/18 20:13:54 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string.h>
# include "../includes/fillit.h"

typedef struct	s_form2
{
	char		form;
	int			(*f)(t_map *maplist, int i, int x);
}				t_form2;

typedef struct	s_form3
{
	char		form;
	int			(*f)(t_map *maplist, int x);
}				t_form3;

int				creat_a(t_map *maplist, int i, int x);
int				creat_b(t_map *maplist, int i, int x);
int				creat_c(t_map *maplist, int i, int x);
int				creat_d(t_map *maplist, int i, int x);
int				creat_e(t_map *maplist, int i, int x);
int				creat_f(t_map *maplist, int i, int x);
int				creat_g(t_map *maplist, int i, int x);
int				creat_h(t_map *maplist, int i, int x);
int				creat_i(t_map *maplist, int i, int x);
int				creat_j(t_map *maplist, int i, int x);
int				creat_k(t_map *maplist, int i, int x);
int				creat_l(t_map *maplist, int i, int x);
int				creat_m(t_map *maplist, int i, int x);
int				creat_n(t_map *maplist, int i, int x);
int				creat_o(t_map *maplist, int i, int x);
int				creat_p(t_map *maplist, int i, int x);
int				creat_q(t_map *maplist, int i, int x);
int				creat_r(t_map *maplist, int i, int x);
int				creat_s(t_map *maplist, int i, int x);

t_form2			g_creatform[] =
{
	{'a', &creat_a},
	{'b', &creat_b},
	{'c', &creat_c},
	{'d', &creat_d},
	{'e', &creat_e},
	{'f', &creat_f},
	{'g', &creat_g},
	{'h', &creat_h},
	{'i', &creat_i},
	{'j', &creat_j},
	{'k', &creat_k},
	{'l', &creat_l},
	{'m', &creat_m},
	{'n', &creat_n},
	{'o', &creat_o},
	{'p', &creat_p},
	{'q', &creat_q},
	{'r', &creat_r},
	{'s', &creat_s},
	{'\0', NULL}
};

int				clear_a(t_map *maplist, int x);
int				clear_b(t_map *maplist, int x);
int				clear_c(t_map *maplist, int x);
int				clear_d(t_map *maplist, int x);
int				clear_e(t_map *maplist, int x);
int				clear_f(t_map *maplist, int x);
int				clear_g(t_map *maplist, int x);
int				clear_h(t_map *maplist, int x);
int				clear_i(t_map *maplist, int x);
int				clear_j(t_map *maplist, int x);
int				clear_k(t_map *maplist, int x);
int				clear_l(t_map *maplist, int x);
int				clear_m(t_map *maplist, int x);
int				clear_n(t_map *maplist, int x);
int				clear_o(t_map *maplist, int x);
int				clear_p(t_map *maplist, int x);
int				clear_q(t_map *maplist, int x);
int				clear_r(t_map *maplist, int x);
int				clear_s(t_map *maplist, int x);

t_form3			g_clearform[] =
{
	{'a', &clear_a},
	{'b', &clear_b},
	{'c', &clear_c},
	{'d', &clear_d},
	{'e', &clear_e},
	{'f', &clear_f},
	{'g', &clear_g},
	{'h', &clear_h},
	{'i', &clear_i},
	{'j', &clear_j},
	{'k', &clear_k},
	{'l', &clear_l},
	{'m', &clear_m},
	{'n', &clear_n},
	{'o', &clear_o},
	{'p', &clear_p},
	{'q', &clear_q},
	{'r', &clear_r},
	{'s', &clear_s},
	{'\0', NULL}
};

#endif
