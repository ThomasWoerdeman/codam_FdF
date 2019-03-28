/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/22 17:11:35 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/22 17:11:37 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		len;
	char	*ret;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char *) * len);
	ret[len] = '\0';
	len--;
	while (*s)
	{
		ret[len] = *s;
		s++;
		len--;
	}
	return (ret);
}
