/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:55:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/31 16:54:51 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The isdigit() function tests for a decimal digit character. Regardless of
	locale, this includes the following characters only:

	``0''``1''``2''``3''``4''
	``5''``6''``7''``8''``9''

RETURN VALUES
	The isdigit() functions return zero if the character tests false and return
	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || 57 < c)
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\n[1 = TRUE, 0 = FALSE]\n\n");
// 	printf("A is %i\n", ft_isdigit('A'));
// 	printf("Z is %i\n", ft_isdigit('Z'));
// 	printf("a is %i\n", ft_isdigit('a'));
// 	printf("z is %i\n", ft_isdigit('z'));
// 	printf("1 is %i\n", ft_isdigit('1'));
// 	printf("9 is %i\n", ft_isdigit('9'));
// 	printf("/ is %i\n", ft_isdigit('/'));
// 	printf(") is %i\n\n", ft_isdigit(')'));
// 	return (0);
// }
