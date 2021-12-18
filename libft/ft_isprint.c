/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 01:45:31 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/02 20:14:39 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	checks for any printable character including space.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (16384);
}
