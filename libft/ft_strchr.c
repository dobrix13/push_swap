/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:09:08 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/21 19:50:12 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The	strchr() function returns a pointer to the first occurrence of the
**	character c in the string s.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*return_str;

	return_str = (char *)s;
	while (*return_str != c)
	{
		if (*return_str == '\0')
		{
			return (NULL);
		}
		return_str++;
	}
	return (return_str);
}
