/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:21:06 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/21 20:43:26 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The	strcmp()  function compares the two strings s1 and s2.  The locale
**	is not taken into account (for  a  locale-aware  comparison,  see  str‐
**	coll(3)).   It  returns an integer less than, equal to, or greater than
**	zero if s1 is found, respectively, to be less than,  to  match,  or  be
**	greater than s2.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
