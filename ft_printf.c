/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:20 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/30 20:04:18 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_print_args.c"

int format_checker(char format_specifier, va_list *ap)
{
    int counter;

    counter = 0;
    if (format_specifier == 'c') //character
        counter += ft_printchar(ap);
    else if (format_specifier == 's') //string
        write(1, "s", 1);
    else if (format_specifier == 'p') //The void * pointer argument has to be printed in hexadecimal format.
        write(1, "p", 1);
    else if (format_specifier == 'd' || format_specifier == 'i') //number (base 10)
        write(1, "d", 1);
    else if (format_specifier == 'u') //unsigned decimal (base 10)
        write(1, "u", 1);
    else if (format_specifier == 'x') //hexadecimal lower case (base 16)
        write(1, "x", 1);
    else if (format_specifier == 'X') //hexadecimal upper case (base 16)
        write(1, "X", 1);
    else if (format_specifier == '%') //percent sign '%'
        write(1, "%", 1);
    else
        write(1, "Format Specifier Error", 22);
        return counter;
    }
    
int	ft_printf(const char *fmt, ...)
{
    va_list ap;
    int counter;
    
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
    
    return counter;
}



int main()
{
    int counter;

    counter = 0;
    printf("\n");
    counter = ft_printf("Hi my name is bob. I am %c '%s' years old", 'a', "Does it work??");
    printf("\n\ncounter = %d", counter);
    printf("\n\n");
    
    return 0;
}
