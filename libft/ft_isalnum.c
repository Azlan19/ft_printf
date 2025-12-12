/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:04:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 16:43:17 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The isalnum() function tests for any character for which isalpha(3) or
	isdigit(3) is true. The value of the argument must be representable as an
	unsigned char or the value of EOF.

RETURN VALUES
	The isalnum() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	printf("\n[1 = TRUE, 0 = FALSE]\n\n");
//     printf("A is %i\n", ft_isalnum('A'));
//     printf("Z is %i\n", ft_isalnum('Z'));
//     printf("a is %i\n", ft_isalnum('a'));
//     printf("z is %i\n", ft_isalnum('z'));
//     printf("1 is %i\n", ft_isalnum('1'));
//     printf("9 is %i\n", ft_isalnum('9'));
//     printf("/ is %i\n", ft_isalnum('/'));
//     printf(") is %i\n\n", ft_isalnum(')'));

//     return (0);
// }
