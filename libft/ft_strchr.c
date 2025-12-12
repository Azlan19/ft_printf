/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:46:03 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:01:52 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The strchr() function returns a pointer to the first occurrence of the
	character c in the string s.
	Here "character" means "byte"; these functions do not work with wide or
	multibyte characters.

RETURN VALUE
	The  strchr()  and  function  returns  a  pointer to the matched character
	or NULL if the character is not found.  The terminating null byte is
	considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "Abracadabra";
// 	char character = 'c';

// 	printf("\nBEFORE:\n");
// 	printf("[STRING       = %s]\n", string);
// 	printf("[SEARCH FOR   = '%c']\n", character);

// 	printf("\nAFTER:\n");
// 	printf("[STRING = %s]\n\n", ft_strchr(string, character));

// 	return (0);
// }
