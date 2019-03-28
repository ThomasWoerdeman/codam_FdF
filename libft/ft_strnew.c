/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 10:37:18 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 10:37:19 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;
	size_t	cnt;

	cnt = 0;
	ret = malloc(sizeof(char) * size + 1);
	if (ret == NULL)
		return (NULL);
	while (cnt < size + 1)
	{
		ret[cnt] = '\0';
		cnt++;
	}
	return (ret);
}
