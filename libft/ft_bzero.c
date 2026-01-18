/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:22:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 15:54:27 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The bzero() function erases the data in the n bytes of the memory starting at
	the location pointed to by s, by writing zeros (bytes containing '\0') to
    that area.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
//     char string[] = "Hello world";
// 	size_t n = 3;

//     printf("\nBEFORE :\n");
//     printf("[STRING  = %s]\n", string);
//     printf("[n bytes = %zu]\n", n);

//     ft_bzero(string, n);

//     printf("\nAFTER:\n");
//     printf("[STRING = %s]\n\n", string);
//     printf("[STRING + n bytes = %s]\n\n", string + n);

//     return (0);
// }
