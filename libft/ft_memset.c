/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:56 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 01:35:03 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The memset() function writes len bytes of value c (converted to an
	unsigned char) to the string b.

RETURN VALUES
	The memset() function returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	string[] = "Abracadabra";
// 	char	character = 'h';
// 	size_t	n_bytes = 4;

// 	printf("\nBEFORE:\n");
// 	printf("[STRING       = %s]\n", string);
// 	printf("[CHAR         = %c]\n", character);
// 	printf("[NO. OF BYTES = %zu]\n", n_bytes);

// 	printf("\nAFTER:\n");
// 	printf("[STRING = %s]\n\n", (char *)ft_memset(string, character, n_bytes));

// 	return (0);
// }
