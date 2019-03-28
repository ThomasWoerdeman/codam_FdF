/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtoupper.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 14:21:49 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/23 14:21:51 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *s)
{
	int		len;
	char	*ret;

	len = 0;
	ret = (char *)malloc(sizeof(char *) * ft_strlen(s));
	while (*s)
	{
		ret[len] = ft_toupper(*s);
		s++;
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
