/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2026/01/17 19:33:05 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// format_specifier == 'x'
int	ft_hexlen(unsigned long long num)
{
	int	counter;

	counter = 0;
	while (num >= 16)
	{
		num = num / 16;
		counter++;
	}
	return (++counter);
}

void	ft_printhex(unsigned long long n, char fmt_spec)
{
	char	nbr;
	char	*base_16;

	if (fmt_spec == 'x')
		base_16 = "0123456789abcdef";
	else
		base_16 = "0123456789ABCDEF";
	if (n >= 16)
		ft_printhex(n / 16, fmt_spec);
	nbr = base_16[(n % 16)];
	write(1, &nbr, 1);
}
