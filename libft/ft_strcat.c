/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 13:10:36 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 13:10:37 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		cnt;
	int		len;

	cnt = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[cnt] != '\0')
	{
		s1[cnt + len] = s2[cnt];
		cnt++;
	}
	s1[cnt + len] = '\0';
	return (s1);
}
