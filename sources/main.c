/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfouques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:30:32 by hfouques          #+#    #+#             */
/*   Updated: 2016/01/25 15:57:30 by gcourrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../includes/fillit.h"

static int	ft_parse_error(int i)
{
	(void)i;
	ft_putstr_fd("error\n", 2);
	return (0);
}

static int	ft_verif_parse(char *buffer)
{
	int		i;
	int		nbr_dieze;
	int		nbr_other;

	i = 0;
	nbr_dieze = 0;
	nbr_other = 0;
	while (buffer[i])
	{
		if (buffer[i] == '#')
			nbr_dieze++;
		else if (buffer[i] == '.')
			nbr_other++;
		else if (buffer[i] != '\n')
			return (0);
		if (((i + 1) % 5 == 0) && buffer[i] != '\n')
			return (0);
		i++;
	}
	if (nbr_other != 12 || nbr_dieze != 4)
		return (0);
	return (1);
}

static int	ft_parse(char *entree, char *str)
{
	int		fd;
	int		ret;
	char	*buffer;
	int		i;

	i = 0;
	if (!(buffer = (char *)malloc(sizeof(char) * BUF_SIZE + 1)))
		return (ft_parse_error(7));
	if ((fd = open(entree, O_RDONLY)) > -1)
	{
		while ((ret = read(fd, buffer, BUF_SIZE)) > 0)
		{
			buffer[ret] = '\0';
			if (ft_verif_parse(buffer) == 0)
				return (ft_parse_error(6));
			if (ft_check_form(buffer, str) == 0)
				return (ft_parse_error(5));
			i++;
		}
		if (close(fd) == -1 || ret < 0 ||
			buffer[20] != '\0' || (i == 0 && ret == 0))
			return (ft_parse_error(4));
		return (1);
	}
	return (ft_parse_error(3));
}

int			main(int ac, char **av)
{
	char	*str;

	if (!(str = (char *)ft_memalloc(27)))
		return (ft_parse_error(1));
	ac = 0;
	if (av[1])
	{
		if (!(ft_parse(av[1], str) == 0))
		{
			algo_reso(str);
			return (0);
		}
		return (0);
	}
	return (ft_parse_error(2));
}
