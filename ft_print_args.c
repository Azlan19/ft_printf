/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:07:54 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/30 20:10:13 by oazlan           ###   ########.fr       */
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

int ft_printstr(va_list *ap)
{
    int i;
    char *str = va_arg(*ap, char*);

    i = 0;
    while(str[i])
    {
        write(1, &str[i++], 1);
    }
    return i;
    
}
