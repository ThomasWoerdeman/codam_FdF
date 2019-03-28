/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 11:05:35 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 11:05:36 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	cnt;
	size_t	stop;

	if (s)
	{
		cnt = 0;
		stop = ft_strlen(s);
		while (cnt < stop)
		{
			s[cnt] = '\0';
			cnt++;
		}
	}
}
