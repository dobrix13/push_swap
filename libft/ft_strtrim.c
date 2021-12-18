/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:21:44 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/04 21:39:18 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a copy of
**	’s1’ with the characters specified in ’set’ removed
**	from the beginning and the end of the string.
*/
#include "libft.h"

static unsigned int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	n;
	char			*start;
	char			*end;
	char			*res;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && in_set(s1[i], set))
		i++;
	start = (char *)&s1[i];
	i = ft_strlen(s1) - 1;
	while (i >= 0 && in_set(s1[i], set))
		i--;
	end = (char *)&s1[i];
	if (!*s1 || end == start)
		n = 2;
	else
		n = end - start + 2;
	res = malloc(sizeof(char) * n);
	if (!res)
		return (NULL);
	ft_strlcpy(res, start, n);
	return (res);
}
