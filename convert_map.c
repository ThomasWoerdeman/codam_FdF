/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_map.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 19:15:58 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 18:01:22 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char		*read_file(int fd)
{
	char			buf[BUFF_SIZE + 1];
	char			*file;
	char			*tmp;
	int				ret;

	file = (char *)ft_memalloc(sizeof(file));
	ret = read(fd, buf, BUFF_SIZE);
	if (ret < 0)
		return (NULL);
	while (ret)
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(file, buf);
		free(file);
		file = tmp;
		ret = read(fd, buf, BUFF_SIZE);
	}
	return (file);
}

void		convert_str(t_ptr *ptr, t_point *map, char *s, int y)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != ' ' && *s)
		{
			map[i].x = i;
			map[i].y = y;
			map[i].z = ft_atoi(s);
			if (map[i].z > ptr->maxz)
				ptr->maxz = map[i].z;
			if (map[i].z < ptr->minz)
				ptr->minz = map[i].z;
			while (*s != ' ' && *s)
				s++;
			i++;
		}
		if (*s)
			s++;
	}
}

void		convert_file(t_ptr *ptr, char **array)
{
	t_point		c;

	c.y = 0;
	c.z = ft_cntwords(array[0], ' ');
	ptr->map = (t_point **)ft_memalloc(sizeof(t_point) * ft_arraylen(array));
	while (*array)
	{
		ptr->map[c.y] = (t_point *)ft_memalloc(sizeof(t_point) * c.z);
		convert_str(ptr, ptr->map[c.y], *array, c.y);
		array++;
		c.y++;
	}
	ptr->sx = c.z - 1;
	ptr->sy = c.y;
}

int			check_map(char *file)
{
	while (*file)
	{
		if (*file != ' ' && *file != '\n' && *file != '-')
			if (!ft_isdigit(*file))
				return (0);
		file++;
	}
	return (1);
}

int			convert_map(int fd, t_ptr *ptr)
{
	char	**array;
	char	*file;

	if (fd < 0)
		return (0);
	file = read_file(fd);
	if (file == NULL || !check_map(file))
		return (0);
	array = ft_strsplit(file, '\n');
	convert_file(ptr, array);
	free(file);
	ft_freearray(array);
	return (1);
}
