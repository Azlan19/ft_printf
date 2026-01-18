/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:42:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:58:26 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Counts the number of nodes in the list.

RETURN VALUE
	The length of the list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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

// 	printf("\n[ft_lstsize = %d]\n\n", ft_lstsize(list));

// 	return (0);
// }
