/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:31 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 22:12:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a string representing the
	integer received as an argument. Negative numbers must be handled.

RETURN VALUE
	The string representing the integer.
	NULL if the allocation fails.
*/

#include "libft.h"

static long long	ft_intlen(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			intlen;
	char		*ptr;
	long long	big_n;

	big_n = n;
	intlen = ft_intlen(big_n);
	ptr = (char *)ft_calloc(intlen + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n == 0)
		ptr[0] = '0';
	if (big_n < 0)
	{
		big_n = -big_n;
		ptr[0] = '-';
	}
	while (big_n > 0)
	{
		ptr[--intlen] = (big_n % 10) + '0';
		big_n = big_n / 10;
	}
	return (ptr);
}

// int	main(void)
// {
// 	long long	number;

// 	// number = -123;
// 	number = 1000034;
// 	// number = 0;
// 	printf("\n[NUMBER  = %lld]\n", number);
// 	printf("\n[ft_itoa = %s]\n\n", ft_itoa(number));
// 	return (0);
// }
