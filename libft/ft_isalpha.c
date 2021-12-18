/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 00:12:09 by avitolin          #+#    #+#             */
/*   Updated: 2021/05/22 01:02:39 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	hecks  for an alphabetic character; in the standard "C" locale,
**	it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
**	cales, there may be additional characters for which isalpha() is
**	true—letters which are neither uppercase nor lowercase.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	else
		return (0);
}
