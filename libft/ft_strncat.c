/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 13:37:06 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 13:37:07 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	cnt;
	size_t	len;

	cnt = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[cnt] != '\0' && n > cnt)
	{
		s1[cnt + len] = s2[cnt];
		cnt++;
	}
	s1[cnt + len] = '\0';
	return (s1);
}
