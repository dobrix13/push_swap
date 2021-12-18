/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:29:54 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/05 13:47:43 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Deletes and frees the given element and every
**	successor of that element, using the function ’del’
**	and free(3).
**	Finally, the pointer to the list must be set to
**	NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !(*del))
		return ;
	temp = (*lst)->next;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = temp;
	}
	*lst = NULL;
}
