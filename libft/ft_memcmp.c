/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:11:17 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 19:53:06 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The memcmp() function compares the first n bytes (each interpreted as
	unsigned char) of the memory areas s1 and s2.

RETURN VALUE
	The memcmp() function returns an integer less than, equal to, or greater
	than zero if the first n bytes of s1 is found, respectively,
		to be less than,
	to match, or be greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by the sign of the
	difference between the first pair of bytes (interpreted as unsigned char)
	that differ in s1 and s2.

	If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
		{
			return (s1_ptr[i] - s2_ptr[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char string1[] = "Have a lAugh";
// 	char string2[] = "Have a laugh";
// 	size_t n_bytes = 9;

// 	printf("\nBEFORE:\n");
// 	printf("[STRING_1     = %s]\n", string1);
// 	printf("[STRING_2     = %s]\n", string2);
// 	printf("[NO. OF BYTES = %zu]\n", n_bytes);

// 	printf("\nAFTER:\n");
// 	printf("[STRING = %d]\n\n", ft_memcmp(string1, string2, n_bytes));
// 	printf("[int < 0]  means [string1 < string2]\n");
// 	printf("[int == 0] means [string1 == string2]\n");
// 	printf("[int > 0]  means [string1 > string2]\n\n");

// 	return (0);
// }
