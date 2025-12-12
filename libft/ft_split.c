/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:44:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 22:13:28 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns an
	array of strings obtained by splitting ’s’ using
	the character ’c’ as a delimiter. The array must
	end with a NULL pointer.

RETURN VALUE
	The array of new strings resulting from the split.
	NULL if the allocation fails.
*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

static void	*free_everything(char **double_ptr, size_t words)
{
	size_t	m;

	m = 0;
	while (m < words)
	{
		free(double_ptr[m++]);
	}
	free(double_ptr);
	return (NULL);
}

static char	*allocate_ptr(char const *s, int j)
{
	int		n;
	char	*ptr;

	ptr = (char *)ft_calloc(j + 1, sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	n = 0;
	while (n < j)
	{
		ptr[n] = s[n];
		n++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	no_of_words;
	char	**double_ptr;

	no_of_words = count_words(s, c);
	double_ptr = (char **)ft_calloc(no_of_words + 1, sizeof(char *));
	if (!double_ptr)
		return (NULL);
	i = 0;
	while (i < no_of_words)
	{
		while (*s == c && *s)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		double_ptr[i] = allocate_ptr(s, j);
		if (!double_ptr[i])
			return (free_everything(double_ptr, i));
		s = s + j;
		i++;
	}
	return (double_ptr);
}

// int	main(void)
// {
// 	char	**result;
// 	char	sentence[] = "I go to 42 Heilbronn and TUM";
// 	char	delimiter = ' ';
// 	int		i;

// 	printf("\n[SENTENCE  = %s]\n", sentence);
// 	printf("[DELIMETER = '%c']\n\n", delimiter);

// 	result = ft_split(sentence, delimiter);

// 	if (!result)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = \"%s\"\n", i, result[i]);
// 		i++;
// 	}
// 	printf("\n");

// 	// Free memory after testing
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);

// 	return (0);
// }
