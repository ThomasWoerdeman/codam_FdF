/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 15:02:45 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/16 15:02:46 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*input(int n, int len, char *ret)
{
	ret[len] = '\0';
	while (len)
	{
		len--;
		ret[len] = (n % 10) + '0';
		n /= 10;
	}
	return (ret);
}

char			*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		isn;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	isn = n;
	len = 2;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	tmp = n;
	while (tmp /= 10)
		len++;
	ret = malloc(sizeof(char) * len);
	if (ret == NULL)
		return (NULL);
	ret = input(n, len - 1, ret);
	if (isn < 0)
		ret[0] = '-';
	return (ret);
}
