/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:53:16 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 18:16:22 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(va_list *ap)
{
	long	ptr;
	int		counter;

	counter = 0;
	ptr = (long)va_arg(*ap, void *);
	counter += write(1, "0x", 2);
	ft_printhex(ptr, 'x');
	return (counter + ft_hexlen(ptr));
}
