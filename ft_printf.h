/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:58:13 by oazlan            #+#    #+#             */
/*   Updated: 2025/12/31 15:42:21 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Includes -- BEGIN
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
// Includes -- END

int		format_checker(char format_specifier, va_list *ap);
int		ft_printf(const char *fmt, ...);

int		ft_printchar(va_list *ap);
int		ft_printstr(va_list *ap);

int		ft_intlen(int num);

void	ft_printnum(int n);

int		ft_hexlen(int num);

void	ft_print_hex(int n, char format_specifier);

#endif