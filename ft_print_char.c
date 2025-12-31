/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:05:05 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 15:10:46 by oazlan           ###   ########.fr       */
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
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	return (i);
}
