/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:34:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 16:44:23 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The isalpha() function tests for any character for which isupper(3) or
	islower(3) is true. The value of the argument must be representable as an
	unsigned char or the value of EOF.

RETURN VALUES
	The isalpha() function returns zero if the character tests false and
	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\n[1 = TRUE, 0 = FALSE]\n\n");
// 	printf("A is %i\n", ft_isalpha('A'));
// 	printf("Z is %i\n", ft_isalpha('Z'));
// 	printf("a is %i\n", ft_isalpha('a'));
// 	printf("z is %i\n", ft_isalpha('z'));
// 	printf("1 is %i\n", ft_isalpha('1'));
// 	printf("9 is %i\n", ft_isalpha('9'));
// 	printf("/ is %i\n", ft_isalpha('/'));
// 	printf(") is %i\n\n", ft_isalpha(')'));
// 	return (0);
// }
