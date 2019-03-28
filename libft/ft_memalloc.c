/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 10:29:03 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 10:29:04 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;
	size_t	cnt;

	cnt = 0;
	ret = malloc(size);
	if (ret == NULL)
		return (NULL);
	while (cnt < size)
	{
		ret[cnt] = 0;
		cnt++;
	}
	return (ret);
}
