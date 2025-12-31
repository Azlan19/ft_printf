/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 16:21:33 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 16:47:39 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsintlen(unsigned int num)
{
	int	counter;

	counter = 0;
	if (num < 0)
	{
		num = 4294967296 + num;
	}
	while (num > 9)
	{
		num = num / 10;
		counter++;
	}
	return (++counter);
}

void	ft_printunsint(unsigned int n)
{
	char	nbr;

	nbr = 0;
	if (n < 0)
	{
		n = 4294967296 + n;
	}
	if (n >= 10)
	{
		ft_printunsint(n / 10);
	}
	nbr = (n % 10) + '0';
	write(1, &nbr, 1);
}
