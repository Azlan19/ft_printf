/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:37:09 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 16:59:35 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The isprint() function tests for any printing character, including space
	(‘ ’). The value of the argument must be representable as an unsigned char
	or the value of EOF.

RETURN VALUES
	The isprint() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	printf("\n[1 = TRUE, 0 = FALSE]\n\n");
//     printf("'del' is %i\n", ft_isprint(127));
//     printf("Z is %i\n", ft_isprint('Z'));
//     printf("a is %i\n", ft_isprint('a'));
//     printf("z is %i\n", ft_isprint('z'));
//     printf("1 is %i\n", ft_isprint('1'));
//     printf("9 is %i\n", ft_isprint('9'));
//     printf("/ is %i\n", ft_isprint('/'));
//     printf(") is %i\n", ft_isprint(')'));
//     printf("' ' is %i\n\n", ft_isprint(' '));

//     return (0);
// }
