/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 18:50:07 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/21 18:50:09 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*start;
	t_list	*tmp;

	tmp = f(lst);
	ret = ft_lstnew(tmp->content, tmp->content_size);
	if (ret == NULL || lst == NULL)
		return (NULL);
	start = ret;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		ret->next = ft_lstnew(tmp->content, tmp->content_size);
		if (ret == NULL)
			return (NULL);
		ret = ret->next;
		lst = lst->next;
	}
	return (start);
}
