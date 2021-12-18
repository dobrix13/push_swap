/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:06:05 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/04 21:40:55 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a substring
**	from the string ’s’.
**	The substring begins at index ’start’ and is of
**	maximum size ’len’.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!res)
		return (0);
	while (i < len)
	{
		res[i] = *(s + start + i);
		i++;
	}
	res[i] = '\0';
	return (res);
}
