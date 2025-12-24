/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:20 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/24 22:14:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int format_checker(char format_specifier)
{
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

int	ft_printf(const char *initial_string, ...)
{
    
    // int i;
    
    // i = 0;
    // while(intial_string[i])
    // {
    //     if (intial_string[i] == '%')
    //     {
    //         format_checker(intial_string[++i]);
    //         i++;  
    //     }
    //     else
    //     {
    //         write(1, &intial_string[i++], 1);
    //     } 
    // }
    
    // return i;
    
    va_list list_of_arguments, copy_of_arguments;
    va_start(list_of_arguments, initial_string);
    va_copy(copy_of_arguments, list_of_arguments);
    while (*initial_string)
    {
        
        write(1, initial_string++, 1);
    }
    
    return 0;
}



int main()
{
    printf("\n");
    ft_printf("Hi my name is bob. I am %d %% years old", 4);
    printf("\n\n");

    return 0;
}
