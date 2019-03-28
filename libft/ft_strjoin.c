/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 14:14:04 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 14:14:05 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	cnt;
	size_t	cnt2;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret == NULL)
		return (NULL);
	cnt = 0;
	cnt2 = 0;
	while (s1[cnt] != '\0')
	{
		ret[cnt] = s1[cnt];
		cnt++;
	}
	while (s2[cnt2] != '\0')
	{
		ret[cnt] = s2[cnt2];
		cnt++;
		cnt2++;
	}
	ret[cnt] = '\0';
	return (ret);
}
