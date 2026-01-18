/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:50:46 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:58:01 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated
	string little in the string big, where not more than len characters are
	searched. Characters that appear after a ‘\0’ character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only be
	used when portability is not a concern.

RETURN VALUES
	If little is an empty string, big is returned; if little occurs nowhere in
	big, NULL is returned; otherwise a pointer to the first character of the
	first occurrence of little is returned.
	*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && (i + j < len))
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[] = "Abadababongoman";
// 	char needle[] = "ngo";
// 	size_t n_bytes = 13;

// 	printf("\n[HAYSTACK = %s]\n", haystack);
// 	printf("[NEEDLE    = %s]\n", needle);
// 	printf("[No. bytes   = %ld]\n", n_bytes);

// 	printf("\n[ft_strnstr = %s]\n\n", ft_strnstr(haystack, needle, n_bytes));

// 	return (0);

// }
