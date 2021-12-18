/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:36:20 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/21 19:50:12 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strrchr() function returns a pointer to the last occurrence of  the
**	character c in the string s.
*/
#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	if (ft_strchr(src, c) == NULL)
		return (NULL);
	while (*src)
		src++;
	while (*src != c)
		src--;
	return ((char *)src);
}
