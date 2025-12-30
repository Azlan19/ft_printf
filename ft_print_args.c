/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/30 19:50:36 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int ft_printchar(va_list *ap)
{
    int c;

    c = va_arg(*ap, int);
    write(1,&c, 1);
    return 1;
}
