/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:39 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/14 15:29:53 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3(t_list **stack)
{
	const int	n_1 = ft_atoi((*stack)->content);
	const int	n_2 = ft_atoi((*stack)->next->content);
	const int	n_3 = ft_atoi((*stack)->next->next->content);

	if (n_1 == stack_min(*stack) && n_2 == stack_max(*stack))
	{
		exec("sa", stack, 0, 1);
		exec("ra", stack, 0, 1);
	}
	else if (n_2 == stack_min(*stack) && n_3 == stack_max(*stack))
		exec("sa", stack, 0, 1);
	else if (n_3 == stack_min(*stack) && n_2 == stack_max(*stack))
		exec("rra", stack, 0, 1);
	else if (n_2 == stack_min(*stack) && n_1 == stack_max(*stack))
		exec("ra", stack, 0, 1);
	else
	{
		exec("sa", stack, 0, 1);
		exec("rra", stack, 0, 1);
	}
}

static void	sort_big(t_list **stack_a)
{
	int		a;
	int		b;
	t_list	*stack_b;

	stack_b = 0;
	while (ft_lstsize(*stack_a) > 3)
		exec("pb", stack_a, &stack_b, 1);
	if (!is_sorted(*stack_a))
		sort_3(stack_a);
	while (ft_lstsize(stack_b))
	{
		a = 0;
		b = 0;
		get_min_rotate(*stack_a, stack_b, &a, &b);
		if ((a >= 0 && b >= 0) || (a < 0 && b < 0))
			rotate_same(stack_a, &stack_b, a, b);
		else
			rotate_diff(stack_a, &stack_b, a, b);
		exec("pa", &stack_b, stack_a, 1);
	}
}

static void	sort_final(t_list **stack)
{
	const int	i = stack_idx_minmax(*stack, stack_min(*stack));

	if (i < 0)
		exec("rra", stack, 0, -i);
	else
		exec("ra", stack, 0, i);
}

void	sort(t_list **stack)
{
	if (ft_lstsize(*stack) == 2)
		exec("sa", stack, 0, 1);
	else if (ft_lstsize(*stack) == 3)
		sort_3(stack);
	else
		sort_big(stack);
	sort_final(stack);
}
