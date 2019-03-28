/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 11:45:20 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 11:45:21 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hc;
	size_t nc;

	hc = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[hc] && hc < len)
	{
		nc = 0;
		while (haystack[hc + nc] == needle[nc] && nc + hc < len)
		{
			nc++;
			if (!needle[nc])
				return ((char *)haystack + hc);
		}
		hc++;
	}
	return (NULL);
}
