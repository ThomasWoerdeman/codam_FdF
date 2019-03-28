/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdf.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 14:18:59 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 17:03:09 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define BUFF_SIZE 42
# define WIN_X 1920
# define WIN_Y 1080
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"
# include "minilibx_macos/mlx.h"

typedef struct			s_point
{
	int					x;
	int					y;
	int					z;
}						t_point;

typedef struct			s_line
{
	int					dx;
	int					dy;
	int					sx;
	int					sy;
	int					err;
	int					e2;
}						t_line;

typedef struct			s_ptr
{
	void				*mlx;
	void				*win;
	int					size;
	int					zsize;
	int					sx;
	int					sy;
	int					minz;
	int					maxz;
	int					winx;
	int					winy;
	t_point				angle;
	t_point				**map;
}						t_ptr;

char					*make_window(t_ptr *ptr);
int						convert_map(int fd, t_ptr *ptr);
t_point					make_angles(t_ptr *ptr, t_point p, t_point a);
int						keyhook_management(int key, t_ptr *ptr);
void					drawline(t_ptr *ptr, t_point a, t_point b);
void					put_pixels(t_ptr *ptr, t_point **map, t_point angle);
int						ft_abs(int n);

#endif
