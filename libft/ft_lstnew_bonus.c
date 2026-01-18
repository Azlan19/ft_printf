/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:38:02 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:55:17 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns
	a new node. The ’content’ member variable is
	initialized with the given parameter ’content’.
	The variable ’next’ is initialized to NULL.

RETURN VALUE
	A pointer to the new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
	{
		return (NULL);
	}
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
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
