/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:54:04 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:17:00 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	These functions convert lowercase letters to uppercase, and vice versa.

	If c is an uppercase letter, tolower() returns its lowercase equivalent,
	if a lowercase representation exists in the current locale.  Otherwise,
		it returns c.

	If c is neither an unsigned char value nor EOF,
		the behavior of these functions is undefined.

RETURN VALUE
	The value returned is that of the converted letter,
		or c if the conversion was not possible.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

// int main()
// {
//     char c = 'H';

//     printf("\n[CHARACTER  = %c]\n", c);

//     printf("\n[ft_tolower = %c]\n\n", ft_tolower(c));

//     return (0);
// }
