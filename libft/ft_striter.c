/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 11:11:21 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/06 13:24:59 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t	i;

	i = 0;
	if (s && *s && f)
	{
		while (s[i])
		{
			f(s + i);
			i++;
		}
	}
}
