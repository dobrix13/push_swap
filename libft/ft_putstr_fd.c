/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:13:24 by avitolin          #+#    #+#             */
/*   Updated: 2021/09/16 23:36:57 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Outputs the string ’s’ to the given file
**	descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
write(fd, s, ft_strlen(s));
}
