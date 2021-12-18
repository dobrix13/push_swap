/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:56:53 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/14 15:20:20 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_s(char **str_sp)
{
	int	i;

	i = 0;
	while (str_sp[i])
		free(str_sp[i++]);
	free(str_sp);
}

static int	ps_error(void)
{
	ft_putendl_fd("Error", 2);
	return (1);
}

static int	execute(char *str, t_list **stack_1, t_list **stack_2)
{
	int	len;
	int	(*f)(const char *, const char *, size_t);

	len = ft_strlen(str);
	if (len < 3 || len > 4)
		return (ps_error());
	str[len - 1] = 0;
	len = ft_strlen(str);
	f = &ft_strncmp;
	if ((len == 3 && !f(str, "rra", 3)) || (len == 2 && (!f(str, "sa", 2)
				|| !f(str, "ra", 2))))
		exec(str, stack_1, 0, -1);
	else if ((len == 3 && !f(str, "rrb", 3)) || (len == 2 && (!f(str, "sb", 2)
				|| !f(str, "rb", 2))))
		exec(str, stack_2, 0, -1);
	else if ((len == 3 && !f(str, "rrr", 3)) || (len == 2 && (!f(str, "ss", 2)
				|| !f(str, "pb", 2) || !f(str, "rr", 2))))
		exec(str, stack_1, stack_2, -1);
	else if (!f(str, "pa", 2))
		exec(str, stack_2, stack_1, -1);
	else
		return (ps_error());
	return (0);
}

static void	sort_check(t_list **stack_a)
{
	char		*cmd;
	t_list		*stack_b;
	static char	*str;

	stack_b = 0;
	while (1)
	{
		cmd = get_next_line(&str);
		if (!cmd || !ft_strlen(cmd))
		{
			free(cmd);
			break ;
		}
		if (execute(cmd, stack_a, &stack_b))
		{
			free(str);
			free(cmd);
			return ;
		}
		free(cmd);
	}
	if (is_sorted(*stack_a) && !ft_lstsize(stack_b))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

int	main(int argc, char **argv)
{
	int		len;
	char	**str_sp;
	t_list	*stack;

	if (argc > 1)
	{
		str_sp = 0;
		len = split_argv(&str_sp, argv + 1, " ");
		if (!len || !is_valid(str_sp))
		{
			free_s(str_sp);
			ft_putendl_fd("Error", 2);
			return (1);
		}
		stack = 0;
		while (len--)
			ft_lstadd_front(&stack, ft_lstnew(str_sp[len]));
		sort_check(&stack);
		ft_lstclear(&stack, free);
		free(str_sp);
	}
	return (0);
}
