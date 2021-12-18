/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:48:41 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 10:22:00 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	he  memmove()  function  copies n bytes from memory area src to memory
**	area dest.  The memory areas may overlap: copying takes place as though
**	the  bytes in src are first copied into a temporary array that does not
**	overlap src or dest, and the bytes are then copied from  the  temporary
**	array to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else if (dest < source)
		ft_memcpy(dst, src, len);
	return (dst);
}
