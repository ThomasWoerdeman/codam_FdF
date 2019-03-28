/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calculate_angle.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 12:04:24 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 17:02:44 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

t_point	make_angles(t_ptr *ptr, t_point p, t_point a)
{
	int		x;
	int		y;
	int		z;

	x = (p.x - (ptr->sx / 2)) * ptr->size;
	y = (p.y - (ptr->sy / 2)) * ptr->size;
	z = p.z * (ptr->zsize * (ptr->size / 2));
	p.x = x * cos(a.z * M_PI / 180) - y * sin(a.z * M_PI / 180);
	p.y = x * sin(a.z * M_PI / 180) + y * cos(a.z * M_PI / 180);
	p.z = z * cos(a.x * M_PI / 180) - p.y * sin(a.x * M_PI / 180);
	p.y = z * sin(a.x * M_PI / 180) + p.y * cos(a.x * M_PI / 180);
	x = p.x;
	p.x = x * cos(a.y * M_PI / 180) - p.z * sin(a.y * M_PI / 180);
	p.z = x * sin(a.y * M_PI / 180) + p.z * cos(a.y * M_PI / 180);
	p.x = p.x + ptr->winx;
	p.y = p.y + ptr->winy;
	if (ptr->zsize != 0)
		p.z = z / (ptr->zsize * (ptr->size / 2));
	else
		p.z = z;
	return (p);
}
