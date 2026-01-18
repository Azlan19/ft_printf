/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:41:23 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:35:38 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Adds the node ’new’ at the beginning of the list.

 RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("Hello");
// 	t_list *node2 = ft_lstnew("World");
// 	t_list *node3 = ft_lstnew("!");

// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);
// 	ft_lstadd_front(&list, node3);

// 	printf("\n");

// 	int i = 1;
// 	while (list)
// 	{
// 		printf("[NODE_%d = '%s']\n", i, (char *)list->content);
// 		list = list->next;
// 		i++;
// 	}

// 	printf("\n");

// 	return (0);
// }
