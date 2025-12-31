/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 13:48:27 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// format_specifier == 'c'
int	ft_printchar(va_list *ap)
{
	int	c;

	c = va_arg(*ap, int);
	write(1, &c, 1);
	return (1);
}

// format_specifier == 's'
int	ft_printstr(va_list *ap)
{
	int		i;
	char	*str;

	str = va_arg(*ap, char *);
	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	return (i);
}

// format_specifier == 'd' || format_specifier == 'i'

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

void	ft_print_num(int n)
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
		ft_print_num(n / 10);
	}
	nbr = (n % 10) + '0';
	write(1, &nbr, 1);
}

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
