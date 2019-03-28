/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 08:47:24 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/11 08:47:26 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				cnt;
	int				sign;
	int				res;

	cnt = 0;
	sign = 1;
	res = 0;
	while (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n'
		|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
		cnt++;
	if (str[cnt] == '-' || str[cnt] == '+')
	{
		if (str[cnt] == '-')
			sign = -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		res = (res * 10) + (str[cnt] - '0');
		cnt++;
	}
	return (sign * res);
}
