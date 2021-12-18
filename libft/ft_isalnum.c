/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:17:05 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/22 01:29:26 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	checks for an alphanumeric character; it is equivalent to
**	(isal‐pha(c) || isdigit(c)).
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) + ft_isdigit(c) <= 0)
		return (0);
	else
		return (8);
}
