/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:37:27 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/04 21:45:33 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The strdup() function returns a pointer to a new string which
**	is a duplicate of the string s. Memory for the new string is
**	obtained with malloc(3), and can be freed with free(3).
*/
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	ptr = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	else
		ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}
