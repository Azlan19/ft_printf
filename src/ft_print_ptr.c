/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:53:16 by oazlan            #+#    #+#             */
/*   Updated: 2026/01/17 19:34:41 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#ifdef __APPLE__
# define NULL_PTR "0x0"
# define NULL_PTR_LEN 3
#else
# define NULL_PTR "(nil)"
# define NULL_PTR_LEN 5
#endif

int	ft_printptr(va_list *ap)
{
	long	ptr;
	int		counter;

	counter = 0;
	ptr = (long)va_arg(*ap, void *);
	if (!ptr)
		return (write(1, NULL_PTR, NULL_PTR_LEN));
	counter += write(1, "0x", 2);
	ft_printhex(ptr, 'x');
	return (counter + ft_hexlen(ptr));
}
