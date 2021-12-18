/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:38:27 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/21 19:50:12 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  memset()  function  fills  the  first  n  bytes of the memory area
**	pointed to by s with the constant byte c.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		*tmp = (unsigned char)c;
		tmp++;
		i++;
	}
	return (s);
}
