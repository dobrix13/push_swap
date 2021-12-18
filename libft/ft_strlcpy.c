/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:20:17 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 10:50:20 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strlcpy() and strlcat() functions copy and concatenate strings 
**	respectively.
**	They are designed to be safer, more consistent, and less 
**	error prone replacements for strncpy(3) and strncat(3). Unlike those 
**	functions, strlcpy() and strlcat() take the full size of the buffer 
**	(not just the length) and guarantee to NUL-terminate the result 
**	(as long as size is larger than 0 or, in the case of strlcat(), 
**	as long as there is at least one byte free in dst). Note that a 
**	byte for the NUL should be included in size. Also note that strlcpy() 
**	and strlcat() only operate on true ''C'' strings. This means that for 
**	strlcpy() src must be NUL-terminated and for strlcat() both src and dst 
**	must be NUL-terminated.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
