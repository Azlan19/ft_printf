/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 15:31:54 by oazlan           ###   ########.fr       */
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

void	ft_print_lower_hex(int n)
{
	char	nbr;
	char	*low_base_16;

	low_base_16 = "0123456789abcdef";
	nbr = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 16)
	{
		ft_print_lower_hex(n / 16);
	}
	nbr = low_base_16[(n % 16)];
	write(1, &nbr, 1);
}

// format_specifier == 'X'
void	ft_print_upper_hex(int n)
{
	char	nbr;
	char	*up_base_16;

	up_base_16 = "0123456789ABCDEF";
	nbr = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 16)
	{
		ft_print_upper_hex(n / 16);
	}
	nbr = up_base_16[(n % 16)];
	write(1, &nbr, 1);
}
