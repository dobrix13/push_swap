/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:37:21 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 10:40:14 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strlcpy() and strlcat() functions copy and concatenate strings re‐
**	spectively.  They are designed to be safer, more consistent, and less er‐
**	ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
**	tions, strlcpy() and strlcat() take the full size of the buffer (not just
**	the length) and guarantee to NUL-terminate the result (as long as size is
**	larger than 0 or, in the case of strlcat(), as long as there is at least
**	one byte free in dst).  Note that a byte for the NUL should be included
**	in size.  Also note that strlcpy() and strlcat() only operate on true “C”
**	strings.  This means that for strlcpy() src must be NUL-terminated and
**	for strlcat() both src and dst must be NUL-terminated.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
