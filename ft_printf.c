/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:20 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 13:03:59 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int format_checker(char format_specifier, va_list *ap)
{
    int d_i;
    int x;
    int X;

    if (format_specifier == 'c') //character
        return(ft_printchar(ap));
    else if (format_specifier == 's') //string
        return(ft_printstr(ap));
    else if (format_specifier == 'p') //The void * pointer argument has to be printed in hexadecimal format.
        write(1, "p", 1);
    else if (format_specifier == 'd' || format_specifier == 'i') //number (base 10)
    {
        d_i = va_arg(*ap, int);
        ft_print_num(d_i);
        return(ft_intlen(d_i));
    }
    else if (format_specifier == 'u') //unsigned decimal (base 10)
        write(1, "u", 1);
    else if (format_specifier == 'x') //hexadecimal lower case (base 16)
    {
        x = va_arg(*ap, int);
        ft_print_lower_hex(x);
        return(ft_hexlen(x));
    }
    else if (format_specifier == 'X') //hexadecimal upper case (base 16)
    {
        X = va_arg(*ap, int);
        ft_print_upper_hex(X);
        return(ft_hexlen(X));
    }
    else if (format_specifier == '%') //percent sign '%'
    {
        write(1, "%", 1);
        return 1;
    }
        
    return 0;
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
    int normal_counter;
    int my_counterr;

    normal_counter = 0;
    my_counterr = 0;
    printf("\n");
    normal_counter = printf("normal printf = %X", 8888);
    printf("\n");
    my_counterr = ft_printf("my ft_printf  = %X", 8888);
    printf("\n");
    printf("\nnormal counter = %d", normal_counter);
    printf("\nmy counter     = %d", my_counterr);
    printf("\n\n");

    return 0;
}
