/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 12:58:13 by oazlan            #+#    #+#             */
/*   Updated: 2026/01/17 22:26:48 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>

int		format_checker(char fmt_spec, va_list *ap);
int		ft_printf(const char *fmt, ...);

int		ft_printchar(va_list *ap);
int		ft_printstr(va_list *ap);

int		ft_intlen(int num);
void	ft_printnum(int n);

int		ft_hexlen(unsigned long long num);
void	ft_printhex(unsigned long long n, char fmt_spec);

int		ft_unsintlen(unsigned int num);
void	ft_printunsint(unsigned int n);

int		ft_printptr(va_list *ap);

#endif
