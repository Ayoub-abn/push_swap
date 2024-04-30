/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:16:00 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 18:49:32 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b))
	{
		swap(stack_b);
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) && ft_lstsize(*stack_b))
	{
		swap(stack_a);
		swap(stack_b);
	}
	ft_putstr_fd("ss\n", 1);
}

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		rotate(stack_a);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		rotate(stack_b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putstr_fd("rr\n", 1);
	}
}
