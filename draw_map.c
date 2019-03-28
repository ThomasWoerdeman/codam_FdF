/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   draw_map.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 12:06:51 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 16:46:32 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		colorline(t_ptr *ptr, t_point s, t_point a, t_point b)
{
	double	stap;
	double	c1;
	double	c2;
	double	dnew;
	double	dorg;

	dnew = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
	dorg = sqrt(((b.x - s.x) * (b.x - s.x)) + ((b.y - s.y) * (b.y - s.y)));
	if ((ptr->maxz - ptr->minz) != 0)
		stap = (0xFFFFFF - 0xFF0FFF) / (ptr->maxz - ptr->minz);
	else
		stap = (0xFFFFFF - 0xFF0FFF);
	c1 = 0xFFFFFF - stap * (a.z - ptr->minz);
	c2 = 0xFFFFFF - stap * (b.z - ptr->minz);
	if (b.z < a.z)
		return (c2 - ((c2 - c1) / dorg) * dnew);
	else
		return (c2 - ((c2 - c1) / dorg) * dnew);
}

t_line	linit(t_point a, t_point b)
{
	t_line	l;

	l.dx = ft_abs(b.x - a.x);
	l.dy = ft_abs(b.y - a.y);
	if (a.x < b.x)
		l.sx = 1;
	else
		l.sx = -1;
	if (a.y < b.y)
		l.sy = 1;
	else
		l.sy = -1;
	if (l.dx > l.dy)
		l.err = l.dx / 2;
	else
		l.err = -l.dx / 2;
	l.e2 = 0;
	return (l);
}

void	drawline(t_ptr *ptr, t_point a, t_point b)
{
	t_line	l;
	t_point	s;

	s = a;
	l = linit(a, b);
	while (!(a.x == b.x && a.y == b.y))
	{
		l.e2 = l.err;
		if (l.e2 > -l.dx)
		{
			l.err -= l.dy;
			a.x += l.sx;
		}
		if (l.e2 < l.dy)
		{
			l.err += l.dx;
			a.y += l.sy;
		}
		if (a.x < WIN_X && a.x > 0 && a.y < WIN_Y && a.y > 0)
			mlx_pixel_put(ptr->mlx, ptr->win, a.x, a.y,\
				colorline(ptr, s, a, b));
	}
}
