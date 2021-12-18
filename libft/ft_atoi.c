/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 00:34:23 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/02 22:46:15 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  atoi() function converts the initial portion of the string pointed
**	to by nptr to int.  The behavior is the same as
**	strtol(nptr, NULL, 10);
**	except that atoi() does not detect errors.
*/
int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;

	res = 0;
	if (!*str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)res * sign);
}
