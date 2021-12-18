/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 00:55:52 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 10:33:49 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  memcmp()  function compares the first n bytes (each interpreted as
**	unsigned char) of the memory areas s1 and s2.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*res1;
	const unsigned char	*res2;
	size_t				i;

	res1 = (const unsigned char *)s1;
	res2 = (const unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (res1[i] != res2[i])
			return (res1[i] - res2[i]);
		i++;
	}
	return (0);
}
