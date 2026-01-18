/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:53:15 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 19:37:47 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The  memchr() function scans the initial n bytes of the memory area pointed
	to by s for the first instance of c. Both c and the bytes of the memory area
	pointed to by s are interpreted as unsigned char.

RETURN VALUE
	The memchr() function returns a pointer to the matching byte or NULL if the
	character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
		{
			return ((void *)&s_ptr[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "Abracadabra";
// 	char character = 'c';
// 	size_t n_bytes = 5;

// 	printf("\nBEFORE:\n");
// 	printf("[STRING       = %s]\n", string);
// 	printf("[SEARCH FOR   = '%c']\n", character);
// 	printf("[NO. OF BYTES = %zu]\n", n_bytes);

// 	printf("\nAFTER:\n");
// 	printf("[STRING = %s]\n\n", (char *)ft_memchr(string, character, n_bytes));

// 	return (0);
// }
