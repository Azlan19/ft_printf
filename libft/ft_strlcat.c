/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:22:17 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:37:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The strlcat() function copies and concatenates strings respectively. They are
	designed to be safer, more consistent, and less error prone replacements for
	strncpy(3) and strncat(3). Unlike those functions, strlcat() takes the full
	size of the buffer (not just the length) and guarantee to NUL-terminate the
	result (as long as size is larger than 0 or, in the case of strlcat(), as
	long as there is at least one byte free in dst). Note that a byte for the NUL
	should be included in size. Also note that strlcpy() and strlcat() only
	operate on true “C” strings. This means that for strlcpy() src must be
	NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

	The strlcat() function appends the NUL-terminated string src to the end of
	dst. It will append at most size - strlen(dst) - 1 bytes,
		NUL-terminating the
	result.

RETURN VALUES
	The strlcpy() and strlcat() functions return the total length of the string
	they tried to create. For strlcpy() that means the length of src. For
	strlcat() that means the initial length of dst plus the length of src. While
	this may seem somewhat confusing, it was done to make truncation detection
	simple.

	Note, however, that if strlcat() traverses size characters without finding a
	NUL, the length of the string is considered to be size and the destination
	string will not be NUL-teminated (since there was no space for the NUL).
	This keeps strlcat() from running off the end of a string. In practice this
	should not happen (as it means that either size is incorrect or that dst is
	not a proper “C” string). The check exists to prevent potential security
	problems in incorrect code.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] && i + dst_len < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
// 	char destination[] = "Wakanda";
// 	char source[] = "Broomstick";
// 	size_t n_bytes = 15;

// 	printf("\n[DESTINATION = %s]\n", destination);
// 	printf("[SOURCE = %s]\n", source);
// 	printf("[n_bytes = %ld]\n", n_bytes);

// 	printf("\n[ft_strlcat = %ld]\n", ft_strlcat(destination, source, n_bytes));
// 	printf("\n[DESTINATION = %s]\n", destination);
// 	printf("[SOURCE = %s]\n", source);

// 	return (0);
// }
