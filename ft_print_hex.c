/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 15:44:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// format_specifier == 'x'
int	ft_hexlen(int num)
{
	int	counter;

	counter = 0;
	if (num < 0)
	{
		num = -num;
		counter++;
	}
	while (num > 16)
	{
		num = num / 16;
		counter++;
	}
	return (++counter);
}

void	ft_print_hex(int n, char format_specifier)
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
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 16)
	{
		ft_print_hex(n / 16, format_specifier);
	}
	nbr = base_16[(n % 16)];
	write(1, &nbr, 1);
}
