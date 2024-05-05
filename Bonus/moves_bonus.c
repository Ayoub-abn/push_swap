/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:42 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/01 00:28:28 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_list **stack)
{
	int	tmp;

	if (ft_lstsize((*stack)) > 1)
	{
		tmp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = tmp;
	}
}

void	rotate(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (ft_lstsize((*stack)) > 1)
	{
		tmp1 = (*stack);
		tmp2 = (*stack)->next;
		tmp1->next = NULL;
		*stack = tmp2;
		ft_lstadd_back(stack, tmp1);
	}
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (ft_lstsize((*stack)) > 1)
	{
		last = ft_lstlast(*stack);
		tmp = *stack;
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
				break ;
			}
			tmp = tmp->next;
		}
		tmp->next = NULL;
		ft_lstadd_front(stack, last);
	}
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
}
