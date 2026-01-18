/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:54:16 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 01:47:24 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Outputs the string ’s’ to the specified file
	descriptor followed by a newline.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int main()
// {
// 	char string[] = "Good enough";
// 	int file_descriptior = 1;

// 	printf("\n");
// 	ft_putendl_fd(string, file_descriptior);
// 	printf("\n");

// 	return (0);
// }
