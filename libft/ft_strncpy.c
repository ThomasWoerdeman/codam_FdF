/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 13:00:48 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 13:00:51 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	cnt;

	cnt = 0;
	while (src[cnt] && cnt < len)
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	while (cnt < len)
	{
		dst[cnt] = '\0';
		cnt++;
	}
	return (dst);
}
