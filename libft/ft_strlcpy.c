/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:26:50 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:41:06 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The strlcpy() function copies and concatenates strings respectively. They are
	designed to be safer, more consistent, and less error prone replacements for
	strncpy(3) and strncat(3). Unlike those functions, strlcpy() takes the full
	size of the buffer (not just the length) and guarantees to NUL-terminate the
	result (as long as size is larger than 0.)  Note that a byte for the NUL
	should be included in size. Also note that strlcpy() only operates on true
	“C” strings. This means that for strlcpy() src must be NUL-terminated and
	for strlcat() both src and dst must be NUL-terminated.

	The strlcpy() function copies up to size - 1 characters from the
	NUL-terminated string src to dst, NUL-terminating the result.


RETURN VALUES
	The strlcpy() and strlcat() functions return the total length of the string
	they tried to create. For strlcpy() that means the length of src.

*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

// int main()
// {
// 	char destination[] = "Wakanda";
// 	char source[] = "Broomstick";
// 	size_t n_bytes = 4;

// 	printf("\n[DESTINATION = %s]\n", destination);
// 	printf("[SOURCE = %s]\n", source);
// 	printf("[n_bytes = %ld]\n", n_bytes);

// 	printf("\n[ft_strlcpy = %ld]\n", ft_strlcpy(destination, source, n_bytes));
// 	printf("\n[DESTINATION = %s]\n", destination);
// 	printf("[SOURCE = %s]\n\n", source);

// 	return (0);
// }
