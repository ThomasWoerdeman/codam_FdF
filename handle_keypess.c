/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_keypess.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 12:05:32 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 17:21:20 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	change_view_key(int key, t_ptr *ptr)
{
	if (key == 18)
	{
		ptr->angle.x = 0;
		ptr->angle.y = 0;
		ptr->angle.z = 0;
	}
	if (key == 19)
	{
		ptr->angle.x = -10;
		ptr->angle.y = 0;
		ptr->angle.z = 45;
	}
	if (key == 20)
	{
		ptr->angle.x = -90;
		ptr->angle.y = 0;
		ptr->angle.z = 0;
	}
}

void	angle_key(int key, t_ptr *ptr)
{
	if (key == 125)
		ptr->angle.x = ptr->angle.x + 3;
	if (key == 126)
		ptr->angle.x = ptr->angle.x - 3;
	if (key == 123)
		ptr->angle.y = ptr->angle.y + 3;
	if (key == 124)
		ptr->angle.y = ptr->angle.y - 3;
	if (key == 84)
		ptr->angle.z = ptr->angle.z + 3;
	if (key == 83)
		ptr->angle.z = ptr->angle.z - 3;
}

void	size_key(int key, t_ptr *ptr)
{
	if (key == 78 && ptr->size >= 2)
		ptr->size -= 2;
	if (key == 69)
		ptr->size += 2;
	if (key == 27)
		ptr->zsize--;
	if (key == 24)
		ptr->zsize++;
}

int		keyhook_management(int key, t_ptr *ptr)
{
	if (key == 53)
		exit(EXIT_SUCCESS);
	if (key == 13)
		ptr->winy -= 10;
	if (key == 0)
		ptr->winx -= 10;
	if (key == 1)
		ptr->winy += 10;
	if (key == 2)
		ptr->winx += 10;
	size_key(key, ptr);
	change_view_key(key, ptr);
	angle_key(key, ptr);
	mlx_clear_window(ptr->mlx, ptr->win);
	put_pixels(ptr, ptr->map, ptr->angle);
	return (0);
}
