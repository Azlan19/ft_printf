/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:37:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:43:56 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strlen() function calculates the length of the string pointed to by s,
	excluding the terminating null byte ('\0').

RETURN VALUE
	The strlen() function returns the number of bytes in the string pointed to
	by s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
//     char string[] = "testing";
//     printf("\n'%s' has '%zu' characters\n\n", string, ft_strlen(string));

//     return (0);
// }
