/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:44:54 by avitolin          #+#    #+#             */
/*   Updated: 2021/09/09 17:55:37 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a pointer 
**	to the new element. 
**	The variable "content" is initialized with
**	the value of the parameter "content".
**	The variable "next" is initialized to NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (new = NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
