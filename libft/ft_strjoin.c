/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:05:33 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/02 09:15:13 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a new
**	string, which is the result of the concatenation
**	of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*rstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	rstr = (char *)malloc(sizeof(char) * (l + 1));
	if (!rstr)
		return (NULL);
	while (*s1)
	{
		rstr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		rstr[i] = *s2;
		i++;
		s2++;
	}
	rstr[i] = '\0';
	return (rstr);
}
