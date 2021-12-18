/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:10:52 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/05 13:11:59 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Iterates the list ’lst’ and applies the function
**	’f’ to the content of each element.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
