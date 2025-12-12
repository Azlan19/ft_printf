/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:11:08 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 20:15:47 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The memmove() function copies n bytes from memory area src to memory area
	dest. The memory areas may overlap: copying takes place as though the bytes
	in src are first copied into a temporary array that does not overlap src or
	dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
	The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_temp;
	unsigned char	*dest_temp;

	if (!dest && !src)
		return (NULL);
	src_temp = (unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	if (src < dest)
	{
		while (n-- > 0)
		{
			dest_temp[n] = src_temp[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char dest[] = "What";
// 	char src[] = "Phew";
// 	size_t n_bytes = 4;

// 	printf("\nBEFORE:\n");
// 	printf("[DESTINATION  = %s]\n", dest);
// 	printf("[SOURCE       = %s]\n", src);
// 	printf("[NO. OF BYTES = %zu]\n", n_bytes);

// 	printf("\nAFTER:\n");
// 	printf("[ft_memmove   = %s]\n\n", (char *)ft_memmove(dest, src, n_bytes));
// 	printf("[DESTINATION  = %s]\n", dest);
// 	printf("[SOURCE       = %s]\n\n", src);

// 	return (0);
// }
