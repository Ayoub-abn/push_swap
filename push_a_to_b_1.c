/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:25:11 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/15 21:57:48 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_of_max(t_list *stack_b)
{
	t_list	*tmp;
	int		max;
	int		max_index;
	int		i;

	tmp = stack_b;
	max = stack_b->content;
	max_index = 0;
	i = 0;
	while (tmp)
	{
		if (max < tmp->content)
		{
			max = tmp->content;
			max_index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (max_index);
}

void	transfer_to_stack_b(int index, t_list **stack_a, t_list **stack_b)
{
	int	i;

	if (index > ft_lstsize(*stack_b) / 2)
	{
		i = ft_lstsize(*stack_b) - index;
		while (i)
		{
			rrb(stack_b);
			i--;
		}
	}
	else
	{
		i = index;
		while (i)
		{
			rb(stack_b);
			i--;
		}
	}
	pb(stack_a, stack_b);
}

int	get_index_of_min_and_nearest(int element, t_list *head)
{
	int		i;
	int		j;
	t_list	*new;
	int		p;

	i = 0;
	new = head;
	j = -1;
	p = -2147483648;
	while (new)
	{
		if (new->content < element &&new->content >= p)
		{
			p = new->content;
			j = i;
		}
		i++;
		new = new->next;
	}
	if (j == -1)
		j = get_index_of_max(head);
	return (j);
}

void	push_a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	int size, size_stack, element, index;
	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		tmp = *stack_a;
		if (tmp->content > tmp->next->content)
			sa(stack_a);
	}
	else if (size == 3)
		three_numbers(stack_a);
	else
	{
		if (size == 4)
			pb(stack_a, stack_b);
		else
		{
			pb(stack_a, stack_b);
			pb(stack_a, stack_b);
			size_stack = ft_lstsize(*stack_a);
			while (size_stack > 3)
			{
				element = (*stack_a)->content;
				index = get_index_of_min_and_nearest(element, *stack_b);
				// printf("index = %d\n", index);
				transfer_to_stack_b(index, stack_a, stack_b);
				// tba3_steck_b(*stack_b);
				// tba3_steck_a(*stack_a);
				size_stack--;
			}
		}
		// printf("sf 3\n");
		three_numbers(stack_a);
		// tba3_steck_a(*stack_a);
	}
}