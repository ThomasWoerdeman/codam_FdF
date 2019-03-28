/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtolower.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 14:12:24 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/23 14:12:25 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *s)
{
	int		len;
	char	*ret;

	len = 0;
	ret = (char *)malloc(sizeof(char *) * ft_strlen(s));
	while (*s)
	{
		ret[len] = ft_tolower(*s);
		s++;
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
