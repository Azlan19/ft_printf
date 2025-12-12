/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:44:27 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:53:20 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Returns the last node of the list.

RETURN VALUE
	Last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("Hello");
// 	t_list *node2 = ft_lstnew("World");
// 	t_list *node3 = ft_lstnew("!");

// 	printf("\n[node 1 = '%s']\n", (char*)node1->content);
// 	printf("[node 2 = '%s']\n", (char*)node2->content);
// 	printf("[node 3 = '%s']\n", (char*)node3->content);

// 	ft_lstadd_back(&list, node1);
// 	ft_lstadd_back(&list, node2);
// 	ft_lstadd_back(&list, node3);

// 	t_list *last = ft_lstlast(list);
// 	printf("\n[ft_lstlast = '%s']\n\n", (char *)last->content);

// 	return (0);
// }
