/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdf.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 14:18:23 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 17:04:56 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	put_pixels(t_ptr *ptr, t_point **map, t_point angle)
{
	int		x;
	int		y;
	t_point p;
	t_point j;
	t_point	o;

	y = 0;
	while (y < ptr->sy)
	{
		x = 0;
		while (x < ptr->sx + 1)
		{
			p = make_angles(ptr, map[y][x], angle);
			if (x < ptr->sx)
				j = make_angles(ptr, map[y][x + 1], angle);
			if (y > 0)
			{
				o = make_angles(ptr, map[y - 1][x], angle);
				drawline(ptr, p, o);
			}
			drawline(ptr, p, j);
			x++;
		}
		y++;
	}
}

char	*make_window(t_ptr *ptr)
{
	ptr->mlx = mlx_init();
	ptr->win = mlx_new_window(ptr->mlx, WIN_X, WIN_Y, "Fdf");
	ptr->size = 10;
	ptr->zsize = 1;
	if (ptr->sy < 100)
		ptr->size = ((WIN_Y / ptr->sy) / 10) * 5;
	mlx_hook(ptr->win, 2, 0, keyhook_management, ptr);
	ptr->angle.x = -10;
	ptr->angle.y = 0;
	ptr->angle.z = 45;
	ptr->winx = WIN_X / 2;
	ptr->winy = WIN_Y / 2;
	put_pixels(ptr, ptr->map, ptr->angle);
	return (ptr->mlx);
}
