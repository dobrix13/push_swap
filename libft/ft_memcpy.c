/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:01:09 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/21 19:50:12 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  memcpy()  function  copies  n bytes from memory area src to memory
**	area dest.  The memory areas must not overlap.  Use memmove(3) if the
**	memory areas do overlap.
*/
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char	*d_temp;
	char	*s_temp;

	d_temp = (char *)d;
	s_temp = (char *)s;
	while (n > 0)
	{
		*d_temp = *s_temp;
		d_temp++;
		s_temp++;
		n--;
	}
	return (d);
}
