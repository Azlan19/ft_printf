/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:44:08 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 03:21:12 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	These functions convert lowercase letters to uppercase, and vice versa.

	If  c  is a lowercase letter, toupper() returns its uppercase equivalent,
	if an uppercase representation exists in the current locale.  Otherwise, it
	returns c.

	If c is neither an unsigned char value nor EOF,
		the behavior of these functions is undefined.

RETURN VALUE
	The value returned is that of the converted letter,
		or c if the conversion was not possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int main()
// {
//     char c = 'h';

//     printf("\n[CHARACTER  = %c]\n", c);

//     printf("\n[ft_toupper = %c]\n\n", ft_toupper(c));

//     return (0);
// }
