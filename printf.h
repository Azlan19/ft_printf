/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:58:13 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 13:00:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
# define PRINTF_H

// Includes -- BEGIN
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
// Includes -- END

int ft_printchar(va_list *ap);
int ft_printstr(va_list *ap);

int ft_intlen(int num);

void	ft_print_num(int n);

int ft_hexlen(int num);

void ft_print_lower_hex(int n);

void ft_print_upper_hex(int n);