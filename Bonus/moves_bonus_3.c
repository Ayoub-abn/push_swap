/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:16:00 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 18:49:09 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b))
	{
		swap(stack_b);
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) && ft_lstsize(*stack_b))
	{
		swap(stack_a);
		swap(stack_b);
	}
}

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		rotate(stack_a);
	}
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		rotate(stack_b);
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		rotate(stack_a);
		rotate(stack_b);
	}
}
