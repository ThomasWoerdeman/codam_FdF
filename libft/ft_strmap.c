/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 13:05:24 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/14 13:05:25 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		ret[cnt] = f(s[cnt]);
		cnt++;
	}
	ret[cnt] = '\0';
	return (ret);
}
