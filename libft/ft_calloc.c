/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:55:20 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 21:54:43 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The calloc() function allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory. The memory
	is set to zero. If nmemb or size is 0, then calloc() returns either NULL,
	or a unique pointer value that can later be successfully passed to free().
	If the multiplication of nmemb and size would result in integer  overflow,
	then calloc() returns an error.

RETURN VALUE
	The malloc() and calloc() functions return a pointer to the allocated
	memory,	which is suitably aligned for any built-in type. On error, these
	functions return NULL. NULL may also be returned by a successful call to
	malloc() with a size of zero, or by a successful call to calloc() with
	nmemb or size equal to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(nmemb * size);
	i = 0;
	if (!ptr)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
