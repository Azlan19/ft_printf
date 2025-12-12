/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:53:41 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 22:11:31 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The atoi() function converts the initial portion of the string pointed to
	by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);

	except that atoi() does not detect errors.

RETURN VALUE
	The converted value or 0 on error.
*/

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	if ((nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

// int main()
// {
//     char *string = "     -123s56          ";

//     printf("\n[STRING = %s]\n", string);
//     printf("\n[ft_atoi = %d]\n\n", ft_atoi(string));

//     return (0);
// }
