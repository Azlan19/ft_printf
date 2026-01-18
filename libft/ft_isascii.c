/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:27:08 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 16:51:28 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The isascii() function tests for an ASCII character, which is any character
	between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	printf("\n[1 = TRUE, 0 = FALSE]\n\n");
//     printf("'255' is %i\n", ft_isascii(255));
//     printf("Z is %i\n", ft_isascii('Z'));
//     printf("a is %i\n", ft_isascii('a'));
//     printf("z is %i\n", ft_isascii('z'));
//     printf("1 is %i\n", ft_isascii('1'));
//     printf("9 is %i\n", ft_isascii('9'));
//     printf("/ is %i\n", ft_isascii('/'));
//     printf(") is %i\n\n", ft_isascii(')'));

//     return (0);
// }
