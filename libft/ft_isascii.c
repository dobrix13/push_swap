/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:35:40 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/22 01:40:45 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	checks whether c is a 7-bit unsigned char value that  fits  into
**	the ASCII character set.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}
