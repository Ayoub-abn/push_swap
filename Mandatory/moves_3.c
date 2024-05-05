/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:16:00 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/01 21:48:08 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		swap(stack_b);
		ft_putstr_fd("sb\n", 1);
	}
}

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		rotate(stack_a);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		rotate(stack_b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	sa(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
}
