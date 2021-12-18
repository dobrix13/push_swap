/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:48:37 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/06 13:39:53 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  calloc()  function allocates memory for an array of nmemb
**	elements of size bytes each and returns a pointer to the allo‐
**	cated memory.
*/
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	long int	n;

	ptr = NULL;
	n = nmemb * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, n);
	return (ptr);
}
