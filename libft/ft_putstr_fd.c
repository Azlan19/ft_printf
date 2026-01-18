/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:12:30 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 01:49:01 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Outputs the string ’s’ to the specified file
	descriptor.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i++], 1);
	}
}

// int main()
// {
// 	char string[] = "This works";
// 	int file_descriptior = 1;

// 	printf("\n");
// 	ft_putstr_fd(string, file_descriptior);
// 	printf("\n\n");

// 	return (0);
// }
