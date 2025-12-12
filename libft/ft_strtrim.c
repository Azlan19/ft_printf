/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:54:27 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 22:14:23 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a
	copy of ’s1’ with characters from ’set’ removed
	from the beginning and the end.

RETURN VALUE
	The trimmed string.
	NULL if the allocation fails.
*/

#include "libft.h"

static int	trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	length;

	if (!s1 || !set)
	{
		return (NULL);
	}
	length = ft_strlen(s1);
	if (length == 0)
	{
		return (ft_strdup(""));
	}
	i = 0;
	while (trim(s1[i], set))
	{
		i++;
	}
	j = length - 1;
	while (trim(s1[j], set) && j >= 0)
	{
		j--;
	}
	return (ft_substr(s1, i, (j - i) + 1));
}

// int	main(void)
// {
// 	char s1[] = "ababaaaMy name is Simonbbaaabbab";
// 	char set[] = "ab";

// 	printf("\nBEFORE:\n");
// 	printf("[s1 = '%s']\n", s1);
// 	printf("[set = (%s)]\n", set);

// 	printf("\nAFTER:\n");
// 	printf("[ft_strtrim = '%s']\n\n", ft_strtrim(s1, set));

// 	return (0);
// }
