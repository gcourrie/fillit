/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcourrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:25:07 by gcourrie          #+#    #+#             */
/*   Updated: 2016/01/25 17:31:13 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <string.h>

# define BUF_SIZE 21

typedef struct	s_map
{
	char		*map;
	int			size;
}				t_map;

int				ft_check_form(char *s1, char *form);
void			put_1_str(char *str);
int				algo_rec(t_map *maplist, char *str, int i, int x);
char			*ft_table_creator(int map_size);
void			clear_form(t_map *maplist, int x, char *str, int i);
int				creat_form(t_map *maplist, char *str, int i, int x);
void			algo_reso(char *str);
void			ft_affichage(char *str, t_map *maplist);

#endif
