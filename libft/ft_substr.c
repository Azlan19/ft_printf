/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:19:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:13:11 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a substring from the
	string ’s’. The substring starts at index ’start’ and has a maximum length
	of ’len’.

RETURN VALUE
	The substring. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}

// int main()
// {
// 	char string[] = "Abracadabra";
// 	int start = 3;
// 	size_t length = 6;

// 	printf("\n[STRING  = %s]\n", string);
// 	printf("[START   = %d]\n", start);
// 	printf("[LENGTH  = %ld]\n", length);

// 	printf("\n[ft_substr = %s]\n\n", ft_substr(string, start, length));

// 	return (0);
// }
