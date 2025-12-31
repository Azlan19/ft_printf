/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:58:13 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 13:06:39 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

// Includes -- BEGIN
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include "ft_print_args.c"
// Includes -- END

int ft_printchar(va_list *ap);
int ft_printstr(va_list *ap);

int ft_intlen(int num);

void	ft_print_num(int n);

int ft_hexlen(int num);

void ft_print_lower_hex(int n);

void ft_print_upper_hex(int n);

#endif