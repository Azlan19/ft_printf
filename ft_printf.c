/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:20 by oazlan            #+#    #+#             */
/*   Updated: 2026/01/17 22:25:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_checker(char fmt_spec, va_list *ap)
{
	long	n;

	if (fmt_spec == 'c')
		return (ft_printchar(ap));
	else if (fmt_spec == 's')
		return (ft_printstr(ap));
	else if (fmt_spec == 'p')
		return (ft_printptr(ap));
	else if (fmt_spec == 'd' || fmt_spec == 'i' || fmt_spec == 'u')
	{
		n = va_arg(*ap, int);
		if (fmt_spec == 'd' || fmt_spec == 'i')
			return (ft_printnum(n), ft_intlen(n));
		else
			return (ft_printunsint(n), ft_unsintlen(n));
	}
	else if (fmt_spec == 'x' || fmt_spec == 'X')
	{
		n = va_arg(*ap, unsigned int);
		return (ft_printhex(n, fmt_spec), ft_hexlen(n));
	}
	else if (fmt_spec == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt != '%')
		{
			write(1, fmt, 1);
			counter++;
		}
		else
		{
			fmt++;
			counter += format_checker(*fmt, &ap);
		}
		fmt++;
	}
	va_end(ap);
	return (counter);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	normal_counter;
// 	int	my_counterr;

// 	normal_counter = 0;
// 	my_counterr = 0;
// 	printf("\n");
// 	normal_counter = printf("normal printf = %u", -2147483644);
// 	printf("\n");
// 	my_counterr = ft_printf("my ft_printf  = %u", -2147483644);
// 	printf("\n");
// 	printf("\nnormal counter = %d", normal_counter);
// 	printf("\nmy counter     = %d", my_counterr);
// 	printf("\n\n");
// 	return (0);
// }
