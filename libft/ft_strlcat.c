/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 15:36:13 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/18 15:36:14 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t sl;
	size_t dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (size <= dl)
		return (sl + size);
	if (sl >= size - dl)
	{
		ft_strncat(dst, src, size - dl - 1);
		dst[size] = '\0';
	}
	else
		ft_strncat(dst, src, sl);
	return (sl + dl);
}
