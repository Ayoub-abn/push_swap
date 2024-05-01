/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:42 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/01 19:34:05 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	rotate(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	tmp1->next = NULL;
	*stack = tmp2;
	ft_lstadd_back(stack, tmp1);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

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

void	sa(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
}
