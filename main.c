/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 14:18:18 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 17:51:30 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	int			fd;
	t_ptr		*ptr;

	ptr = (t_ptr *)ft_memalloc(sizeof(t_ptr));
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (convert_map(fd, ptr) == 0)
		{
			ft_putstr("fdf: ");
			ft_putstr(av[1]);
			ft_putendl(": Incorrect file");
			return (0);
		}
		mlx_loop(make_window(ptr));
	}
	else
		ft_putendl("usage: ./fdf input_file");
	return (0);
}
