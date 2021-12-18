/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:54:54 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/05 13:48:55 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Adds the element ’new’ at the end of the list.
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new)
	{
		if (*lst == NULL)
			*lst = new ;
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
	}
}
