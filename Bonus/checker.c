/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:06:03 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/06 17:01:26 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	is_sort_check(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	if (ft_lstsize(stack_a) == 0)
	{
		ft_putstr_fd("KO\n", 1);
		(free_stack(&stack_a), free_stack(&stack_b), exit(0));
	}
	tmp = stack_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
		{
			ft_putstr_fd("KO\n", 1);
			(free_stack(&stack_a), free_stack(&stack_b), exit(0));
		}
		tmp = tmp->next;
	}
	if (ft_lstsize(stack_b) > 0)
	{
		ft_putstr_fd("KO\n", 1);
		(free_stack(&stack_a), free_stack(&stack_b));
		exit(0);
	}
	ft_putstr_fd("OK\n", 1);
	(free_stack(&stack_a), free_stack(&stack_b), exit(0));
}

void	moves(t_list **stack_a, t_list **stack_b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(stack_b, stack_a);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(stack_a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(stack_b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(stack_a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else
		(free_stack(stack_a), free_stack(stack_b),
			free(line), ft_putstr_fd("Error\n", 2), exit(255));
}

void	check_moves(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		moves(stack_a, stack_b, line);
		free(line);
		line = get_next_line(0);
	}
}

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		exit(0);
	stack_a = NULL;
	stack_b = NULL;
	fill_stack_a(&stack_a, av, ac);
	check_moves(&stack_a, &stack_b);
	is_sort_check(stack_a, stack_b);
	return (0);
}
