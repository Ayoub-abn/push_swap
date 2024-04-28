/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:42 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/25 23:26:42 by aabdenou         ###   ########.fr       */
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
	if (ft_lstsize(*stack_a))
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
}

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

void	rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		ft_putstr_fd("rrr\n", 1);
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
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp_b;

	if (!stack_b || !stack_a || !*stack_b)
		return ;
	tmp_b = *stack_b;
	*stack_b = tmp_b->next;
	ft_lstadd_front(stack_a, tmp_b);
	ft_putstr_fd("pa\n", 1);
}
