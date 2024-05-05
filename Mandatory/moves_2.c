/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:13:59 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/04 17:11:52 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		reverse_rotate(stack_a);
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		reverse_rotate(stack_b);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;

	if (ft_lstsize(*stack_a))
	{
		tmp_a = *stack_a;
		*stack_a = tmp_a->next;
		ft_lstadd_front(stack_b, tmp_a);
		ft_putstr_fd("pb\n", 1);
	}
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp_b;

	if (ft_lstsize(*stack_b))
	{
		tmp_b = *stack_b;
		*stack_b = tmp_b->next;
		ft_lstadd_front(stack_a, tmp_b);
		ft_putstr_fd("pa\n", 1);
	}
}
