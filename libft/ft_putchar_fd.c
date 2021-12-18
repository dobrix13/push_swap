/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:48:45 by avitolin          #+#    #+#             */
/*   Updated: 2021/06/04 14:57:10 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Outputs the character ’c’ to the given file
**	descriptor "fd".
*/
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
