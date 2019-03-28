/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 16:43:42 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/12 16:43:42 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*tmp;
	const char		*stmp;

	tmp = dst;
	stmp = src;
	while (n)
	{
		n--;
		*tmp++ = *stmp++;
	}
	return (dst);
}
