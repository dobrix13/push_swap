/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:02:56 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/04 19:01:16 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Adds the element ’new’ at the beginning of the
**	list.
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
