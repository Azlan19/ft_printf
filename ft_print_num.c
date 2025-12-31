/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:17:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 15:18:09 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(int num)
{
	int	counter;

	counter = 0;
	if (num < 0)
	{
		num = -num;
		counter++;
	}
	while (num > 10)
	{
		num = num / 10;
		counter++;
	}
	return (++counter);
}

void	ft_printnum(int n)
{
	char	nbr;

	nbr = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_printnum(n / 10);
	}
	nbr = (n % 10) + '0';
	write(1, &nbr, 1);
}
