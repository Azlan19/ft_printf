/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 16:13:36 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// format_specifier == 'x'
int	ft_hexlen(long num)
{
	int	counter;

	counter = 0;
	if (num < 0)
		num = 4294967296 + num;
	while (num > 15)
	{
		num = num / 16;
		counter++;
	}
	return (++counter);
}

void	ft_print_hex(long n, char format_specifier)
{
	char	nbr;
	char	*base_16;

	if (format_specifier == 'x')
		base_16 = "0123456789abcdef";
	else
		base_16 = "0123456789ABCDEF";
	nbr = 0;
	if (n < 0)
	{
		n = 4294967296 + n;
	}
	if (n >= 16)
	{
		ft_print_hex(n / 16, format_specifier);
	}
	nbr = base_16[(n % 16)];
	write(1, &nbr, 1);
}
