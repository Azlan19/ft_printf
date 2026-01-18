/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:05:40 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 20:03:57 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area
	dest.
	The memory areas must not overlap. Use memmove(3) if the memory areas do
	overlap.

RETURN VALUE
	The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src_temp;
	unsigned char		*dest_temp;

	if (dest == src || n == 0)
	{
		return (dest);
	}
	src_temp = (const unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char dest[] = "What";
// 	char src[] = "Phew";
// 	size_t n_bytes = 2;

// 	printf("\nBEFORE:\n");
// 	printf("[DESTINATION  = %s]\n", dest);
// 	printf("[SOURCE       = %s]\n", src);
// 	printf("[NO. OF BYTES = %zu]\n", n_bytes);

// 	printf("\nAFTER:\n");
// 	printf("[ft_memcpy   = %s]\n\n", (char *)ft_memcpy(dest, src, n_bytes));
// 	printf("[DESTINATION = %s]\n", dest);
// 	printf("[SOURCE      = %s]\n\n", src);

// 	return (0);
// }
