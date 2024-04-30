/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:13:59 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 18:49:21 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
	}
}

void	rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	tmp_a = *stack_a;
	*stack_a = tmp_a->next;
	ft_lstadd_front(stack_b, tmp_a);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp_b;

	if (!stack_b || !stack_a || !*stack_b)
		return ;
	tmp_b = *stack_b;
	*stack_b = tmp_b->next;
	ft_lstadd_front(stack_a, tmp_b);
}
