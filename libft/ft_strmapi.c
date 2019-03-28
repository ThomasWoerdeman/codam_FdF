/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 13:15:10 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 13:15:15 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		cnt;

	if (!s)
		return (NULL);
	ret = (char *)malloc(ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	cnt = 0;
	while (s[cnt] != '\0')
	{
		ret[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	ret[cnt] = '\0';
	return (ret);
}
