/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 16:48:59 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/12 16:49:00 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tmp;
	char		*stmp;
	size_t		cnt;

	tmp = (char *)dst;
	stmp = (char *)src;
	cnt = 0;
	while (cnt < n)
	{
		tmp[cnt] = stmp[cnt];
		if (tmp[cnt] == (char)c)
			return (tmp + cnt + 1);
		cnt++;
	}
	return (NULL);
}
