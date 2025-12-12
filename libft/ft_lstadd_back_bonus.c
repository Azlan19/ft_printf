/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:46:02 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 21:38:32 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Adds the node ’new’ at the end of the list.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("Hello");
// 	t_list *node2 = ft_lstnew("World");
// 	t_list *node3 = ft_lstnew("!");

// 	ft_lstadd_back(&list, node1);
// 	ft_lstadd_back(&list, node2);
// 	ft_lstadd_back(&list, node3);

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
