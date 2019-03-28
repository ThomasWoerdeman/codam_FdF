/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 17:33:49 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/27 08:09:44 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cnt_words(char const *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		word_len(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		cnt;
	int		i;
	char	**ret;

	if (!s)
		return (NULL);
	i = 0;
	cnt = cnt_words(s, c);
	ret = (char **)malloc(sizeof(ret) * cnt + 1);
	if (ret == NULL)
		return (NULL);
	while (cnt && *s)
	{
		cnt--;
		while (*s == c && *s)
			s++;
		ret[i] = ft_strsub(s, 0, word_len(s, c));
		if (ret[i] == NULL)
			return (NULL);
		s = s + word_len(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
