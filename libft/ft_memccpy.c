/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:17:31 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 10:07:30 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The memccpy() function copies no more than n bytes from memory area src
**	to memory area dest, stopping when the character c is found.
**	If the memory areas overlap, the results are undefined.
**	
**	The memccpy() function returns a pointer to the next character in dest
**	after c, or  NULL  if  c
**	was not found in the first n characters of src.
*/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
