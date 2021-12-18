/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:45:36 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/14 15:22:23 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	if (ft_atol(str) < INT_MIN || ft_atol(str) > INT_MAX)
		return (0);
	return (1);
}

static int	has_duplicate(int *nums, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
			if (nums[i] == nums[j++])
				return (1);
		++i;
	}
	return (0);
}

int	split_argv(char ***strs, char **argv, char *sep)
{
	int		ret;
	char	*str;
	char	*tmp;

	str = 0;
	while (*argv)
	{
		if (!str)
			str = ft_strdup(*argv++);
		else
		{
			tmp = str;
			str = ft_strjoin(str, sep);
			free(tmp);
			tmp = str;
			str = ft_strjoin(str, *argv++);
			free(tmp);
		}
	}
	*strs = ft_split(str, *sep);
	free(str);
	ret = 0;
	while ((*strs)[ret])
		++ret;
	return (ret);
}

int	is_valid(char **strs)
{
	int	i;
	int	tmp;
	int	ret;
	int	*nums;

	i = 0;
	ret = 0;
	while (strs[i])
		if (!is_int(strs[i++]))
			return (ret);
	nums = malloc(sizeof(int) * i);
	if (!nums)
		return (ret);
	tmp = i;
	while (i--)
		nums[i] = ft_atoi(strs[i]);
	if (!has_duplicate(nums, tmp))
		ret = 1;
	free(nums);
	return (ret);
}

int	is_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (ft_atoi(stack->content) > ft_atoi(stack->next->content))
			return (0);
		stack = stack->next;
	}
	return (1);
}
