/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avitolin <avitolin@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:23:28 by avitolin          #+#    #+#             */
/*   Updated: 2021/12/28 13:37:05 by avitolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUFFER_SIZE 5

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
/*
**	push_swap_utils.c
*/
//static int	has_duplicate(int *n, int len);
int		split_argv(char ***tempstr, char **argv, char *c);
int		is_valid(char **tempstr);
int		is_sorted(t_list *stack);
/*
**	sort.c
*/
void	sort(t_list **stack);
/*
**	sort_utils.c
*/
int		stack_min(t_list *stack);
int		stack_max(t_list *stack);
int		min(int a, int b);
/*
**	sort_x_utils.c
*/
int		stack_idx_minmax(t_list *stack, int n);
void	get_min_rotate(t_list *stack_a, t_list *stack_b, int *x, int *y);
void	rotate_same(t_list **stack_a, t_list **stack_b, int x, int y);
void	rotate_diff(t_list **stack_a, t_list **stack_b, int x, int y);
/*
**	get_next_line.c
*/
char	*get_next_line(char **str);
/*
**	instructions.c
*/
void	exec(char *cmd, t_list **stack_a, t_list **stack_b, int x);

#endif
