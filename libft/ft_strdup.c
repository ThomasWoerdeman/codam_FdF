/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 13:44:32 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/10 13:44:34 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		cnt;

	ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ret == NULL)
		return (NULL);
	cnt = 0;
	while (s1[cnt])
	{
		ret[cnt] = s1[cnt];
		cnt++;
	}
	ret[cnt] = '\0';
	return (ret);
}
