/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:05:11 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/06 13:33:21 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_right(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static size_t	count_left(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		left;
	int		right;
	char	*ret;

	if (!s)
		return (NULL);
	right = count_right(s);
	left = count_left(s) - right + 1;
	ret = ft_strsub(s, right, left);
	if (left < right)
	{
		ret = ft_strdup("");
		return (ret);
	}
	if (ret == NULL)
		return (NULL);
	return (ret);
}
