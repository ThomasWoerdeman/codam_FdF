/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cntwords.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/22 16:47:36 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 13:41:20 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cntwords(const char *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			while (*s != c && *s)
				s++;
			cnt++;
		}
		if (*s)
			s++;
	}
	return (cnt);
}
