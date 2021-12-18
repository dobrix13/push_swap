/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:20:02 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/14 15:32:32 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

int	main(int argc, char **argv)
{
	int		len;
	char	**strs;
	t_list	*stack;

	if (argc > 1)
	{
		strs = 0;
		len = split_argv(&strs, argv + 1, " ");
		if (!len || !is_valid(strs))
		{
			ps_free(strs);
			ft_putendl_fd("Error", 2);
			return (1);
		}
		stack = 0;
		while (len--)
			ft_lstadd_front(&stack, ft_lstnew(strs[len]));
		if (!is_sorted(stack))
			sort(&stack);
		ft_lstclear(&stack, free);
		free(strs);
	}
	return (0);
}
