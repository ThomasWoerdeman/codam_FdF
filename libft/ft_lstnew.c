/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <twoerdem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 17:17:21 by twoerdem       #+#    #+#                */
/*   Updated: 2019/03/06 13:38:11 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = (t_list *)ft_memalloc(sizeof(t_list));
	if (ret == NULL)
		return (NULL);
	if (content == NULL)
	{
		ret->content_size = 0;
		ret->content = NULL;
	}
	else
	{
		ret->content = ft_memalloc(content_size);
		ret->content_size = content_size;
		if (ret->content == NULL)
			return (NULL);
		ft_memcpy(ret->content, content, content_size);
	}
	ret->next = NULL;
	return (ret);
}
