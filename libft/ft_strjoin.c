/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:44:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:28:32 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a
	new string, which is the result of concatenating
	’s1’ and ’s2’.

RETURN VALUE
	The new string.
	NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_length;
	char	*ptr;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((total_length * sizeof(char)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	char string_1[] = "Wakanda";
// 	char string_2[] = "Broomstick";

// 	printf("\n[string_1 = %s]\n", string_1);
// 	printf("[string_2 = %s]\n", string_2);

// 	printf("\n[strjoin = %s]\n\n", ft_strjoin(string_1, string_2));

// 	return (0);
// }
