/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_x_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:18:26 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/15 16:30:49 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	stack_idx_mid(t_list *stack, int num)
{
	int			current;
	int			next;
	int			ret;
	const int	size = ft_lstsize(stack);

	ret = 1;
	while (stack->next)
	{
		current = ft_atoi(stack->content);
		next = ft_atoi(stack->next->content);
		if (num > current && num < next)
			break ;
		++ret;
		stack = stack->next;
	}
	if (ret == size)
		ret = 0;
	else if (ret >= (size + 1) / 2)
		ret = -1 * (size - ret);
	return (ret);
}

int	stack_idx_minmax(t_list *stack, int num)
{
	int			ret;
	int			tmp;
	const int	size = ft_lstsize(stack);

	ret = 0;
	tmp = stack_max(stack);
	if (num <= stack_min(stack))
		tmp = stack_min(stack);
	else
		++ret;
	while (stack)
	{
		if (ft_atoi(stack->content) == tmp)
			break ;
		++ret;
		stack = stack->next;
	}
	if (ret >= (size + 1) / 2)
		ret = -1 * (size - ret);
	return (ret);
}

void	get_min_rotate(t_list *stack_a, t_list *stack_b, int *a, int *b)
{
	int			i;
	int			j;
	int			num;
	int			tmp;
	const int	size_b = ft_lstsize(stack_b);

	tmp = -1;
	while (stack_b && ++tmp >= 0)
	{
		num = ft_atoi(stack_b->content);
		if (num < stack_min(stack_a) || num > stack_max(stack_a))
			i = stack_idx_minmax(stack_a, num);
		else
			i = stack_idx_mid(stack_a, num);
		j = tmp;
		if (tmp >= (size_b + 1) / 2)
			j = -1 * (size_b - tmp);
		if (tmp == 0 || ft_abs(*a) + ft_abs(*b) > ft_abs(i) + ft_abs(j))
		{
			*a = i;
			*b = j;
		}
		stack_b = stack_b->next;
	}
}

void	rotate_same(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a >= 0 && b >= 0)
	{
		exec("rr", stack_a, stack_b, min(ft_abs(a), ft_abs(b)));
		if (ft_abs(a) <= ft_abs(b))
			exec("rb", stack_b, 0, ft_abs(ft_abs(a) - ft_abs(b)));
		else
			exec("ra", stack_a, 0, ft_abs(ft_abs(a) - ft_abs(b)));
	}
	else
	{
		exec("rrr", stack_a, stack_b, min(ft_abs(a), ft_abs(b)));
		if (ft_abs(a) <= ft_abs(b))
			exec("rrb", stack_b, 0, ft_abs(ft_abs(a) - ft_abs(b)));
		else
			exec("rra", stack_a, 0, ft_abs(ft_abs(a) - ft_abs(b)));
	}
}

void	rotate_diff(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a >= 0 && b < 0)
	{
		exec("ra", stack_a, 0, a);
		exec("rrb", stack_b, 0, ft_abs(min(a, b)));
	}
	else
	{
		exec("rb", stack_b, 0, b);
		exec("rra", stack_a, 0, ft_abs(min(a, b)));
	}
}
