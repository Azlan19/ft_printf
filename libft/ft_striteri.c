/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:28:19 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 02:22:09 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Applies the function ’f’ to each character of the
	string passed as argument, passing its index as
	the first argument. Each character is passed by
	address to ’f’ so it can be modified if necessary.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	upper_every_even(unsigned int i, char *s)
// {
// 	if (i % 2 == 0)
// 	{
// 		*s = *s - 32;
// 	}
// }

// int main()
// {
// 	char string[] = "alphabet";

// 	printf("\nBEFORE:\n");
// 	printf("[STRING = %s]\n", string);

// 	ft_striteri(string, upper_every_even);

// 	printf("\nAFTER:\n");
// 	printf("[STRING = %s]\n\n", string);

// 	return (0);
// }
