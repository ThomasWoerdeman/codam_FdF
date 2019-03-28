/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:38:05 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 16:38:06 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*tmp;
	char		*pos;

	tmp = (char *)s;
	pos = NULL;
	while (*tmp)
	{
		if (*tmp == (char)c)
			pos = (char *)tmp;
		tmp++;
	}
	if (c == '\0')
		pos = (char *)tmp;
	return (pos);
}
