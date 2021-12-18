/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:26:37 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/01 09:58:58 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  memchr()  function  scans  the  initial n bytes of the memory area
**	pointed to by s for the first instance of c.  Both c and the  bytes  of
**	the memory area pointed to by s are interpreted as unsigned char.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*res;
	char		character;

	res = (char *)s;
	character = (char)c;
	while (n > 0)
	{
		if (*res == character)
			return (res);
		res++;
		n--;
	}
	return (NULL);
}
