/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:11:50 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/05 13:41:31 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	The  bzero()  function  erases  the  data  in the n bytes of the memory
**	starting at the location pointed to by s, by writing zeros (bytes  con‐
**	taining '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
