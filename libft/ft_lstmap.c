/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:13:17 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/05 13:15:19 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Iterates the list ’lst’ and applies the function
**	’f’ to the content of each element. Creates a new
**	list resulting of the successive applications of
**	the function ’f’. The ’del’ function is used to
**	delete the content of an element if needed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*new;

	if (!lst)
		return (NULL);
	cpy = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new)
		{
			ft_lstadd_back(&cpy, new);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&cpy, (*del));
			return (NULL);
		}
	}
	return (cpy);
}
