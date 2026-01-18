/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:36:01 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 20:36:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Iterates through the list ’lst’, applies the
	function ’f’ to each node’s content, and creates
	a new list resulting of the successive applications
	of the function ’f’. The ’del’ function is used to
	delete the content of a node if needed.

RETURN VALUE
	The new list.
	NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_content;
	t_list	*temp;

	if (!lst || !f || !del)
	{
		return (NULL);
	}
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		temp = ft_lstnew(new_content);
		if (!temp)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}
