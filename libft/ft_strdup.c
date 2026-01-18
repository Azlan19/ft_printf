/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:29:48 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:09:51 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strdup() function returns a pointer to a new string which is a duplicate
	of the string s. Memory for the new string is obtained with malloc(3), and
	can be freed with free(3).

RETURN VALUE
	On  success,
		the strdup() function returns a pointer to the duplicated string.
	It returns NULL if insufficient memory was available,
		with errno set to indicate
	the cause of the error.

*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len_s;
	char	*ptr;

	len_s = ft_strlen(s);
	ptr = (char *)malloc((len_s * sizeof(char)) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char string[] = "Abracadabra";
// 	char *duplicate_string;

// 	printf("\nBEFORE:\n");
// 	printf("[STRING     = %s]\n", string);

// 	duplicate_string = ft_strdup(string);

// 	printf("\nAFTER STRDUP:");
// 	printf("\n[STRING     = %s]\n", string);
// 	printf("[DUP_STRING = %s]\n\n", duplicate_string);

// 	return (0);
// }
