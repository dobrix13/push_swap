/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:31:01 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/03 12:14:20 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Outputs the string ’s’ to the given file
**	descriptor, followed by a newline.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
