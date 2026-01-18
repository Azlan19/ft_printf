/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:36:14 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:00:18 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The strrchr() function returns a pointer to the last occurrence of the
	character c in the string s.
	Here "character" means "byte"; these functions do not work with wide
	or multibyte characters.

RETURN VALUE
	The  strchr()  and  strrchr()  functions  return  a  pointer to the matched
	character or NULL if the character is not found.  The terminating null byte
	is considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	int	i;

	size = ft_strlen(s);
	if (s[size] == (char)c)
	{
		return ((char *)&s[size]);
	}
	i = 0;
	while ((size - 1 - i) >= 0)
	{
		if (s[size - 1 - i] == (char)c)
		{
			return ((char *)&s[size - 1 - i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "Abracadabra";
// 	char character = 'b';

// 	printf("\nBEFORE:\n");
// 	printf("[STRING       = %s]\n", string);
// 	printf("[SEARCH FOR   = '%c']\n", character);

// 	printf("\nAFTER:\n");
// 	printf("[ft_strrchr = %s]\n\n", ft_strrchr(string, character));

// 	return (0);
// }
