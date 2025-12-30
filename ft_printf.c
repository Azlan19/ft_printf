/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:20 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/30 16:38:54 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int format_checker(char format_specifier)
{
    int d;
    if (format_specifier == 'c')
        write(1, "4", 1);
    else if (format_specifier == 's')
        write(1, "4", 1);
    else if (format_specifier == 'p')
        write(1, "4", 1);
    else if (format_specifier == 'd' || format_specifier == 'i')
        write(1, "4", 1);
    else if (format_specifier == 'u')
        write(1, "4", 1);
    else if (format_specifier == 'x')
        write(1, "4", 1);
    else if (format_specifier == 'X')
        write(1, "4", 1);
    else if (format_specifier == '%')
        write(1, "%", 1);
    else
        write(1, "Format Specifier Error", 22);

    return 0;
}

int	ft_printf(const char *fmt, ...)
{
    va_list ap;
    int test;
    
    va_start(ap, fmt);
    while (*fmt)
    {
        if (*fmt != '%')
        {
            write(1, fmt, 1);
        }
        else
        {
            test = va_arg(ap, int) + '0';
            write(1, &test, 1);
            fmt++;
        }
        fmt++;   
    }
    
    return 0;
}



int main()
{
    printf("\n");
    ft_printf("Hi my name is bob. I am %d %d years old", 4, 8);
    printf("\n\n");

    return 0;
}
