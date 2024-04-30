/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:26:47 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 17:03:54 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2_3_4_5(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a);
		(free_stack(stack_a), free_stack(stack_b));
		exit(0);
	}
	else if (size == 3)
	{
		three_numbers(stack_a);
		(free_stack(stack_a), free_stack(stack_b));
		exit(0);
	}
	else if (size == 4 || size == 5)
		(for_numbers(stack_a, stack_b), exit(0));
}
