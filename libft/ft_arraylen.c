/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arraylen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/18 16:49:28 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/25 18:03:41 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arraylen(char **s)
{
	int		cnt;

	cnt = 0;
	while (s[cnt])
		cnt++;
	return (cnt);
}
