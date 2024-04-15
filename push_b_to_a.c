/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 02:31:31 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/05 00:32:45 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	transfer_to_stack_a(int index, t_list **stack_a, t_list **stack_b)
{
	int	i;

	if (index > ft_lstsize(*stack_a) / 2)
	{
		i = ft_lstsize(*stack_a) - index;
		while (i)
		{
			rra(stack_a);
			i--;
		}
	}
	else
	{
		i = index;
		while (i)
		{
			rb(stack_a);
			i--;
		}
	}
	pa(stack_b, stack_a);
}
int	get_index_of_min(t_list *stack_b)
{
	t_list	*tmp;
	int		min;
	int		min_index;
	int		i;

	tmp = stack_b;
	min = stack_b->content;
	min_index = 0;
	i = 0;
	while (tmp)
	{
		if (min > tmp->content)
		{
			min = tmp->content;
			min_index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (min_index);
}
int	get_index_of_max_and_nearest(int element, t_list *head)
{
	int		i;
	int		j;
	t_list	*new;
	long		p;

	i = 0;
	new = head;
	j = -1;
	p = 2147483648;
	while (new)
	{
		//printf("\n element =====>: %d\n",element);
		//printf("\n content  =====>: %d\n",new->content);
		
		if (new->content > element   && new->content < p)
		{
			p = new->content;
			//printf("\n p =====>: %ld\n",p);
			j = i;
			//printf("\n j in while =====>: %d\n",j);
		}
		i++;
		new = new->next;
	}
	//printf("\n j out while =====>: %d\n",j);
	if (j == -1)
	{
		j = get_index_of_min(head);
	}
	return (j);
}

void push_min_to_top(t_list **stack_a)
{
	int index = get_index_of_min(*stack_a);
	
	int	i;

	if (index > ft_lstsize(*stack_a) / 2)
	{
		i = ft_lstsize(*stack_a) - index;
		while (i)
		{
			rrb(stack_a);
			i--;
		}
	}
	else
	{
		i = index;
		while (i)
		{
			rb(stack_a);
			i--;
		}
	}
}

void	push_b_to_a(t_list **stack_a, t_list **stack_b)
{
	int i = ft_lstsize(*stack_b);
	while (i)
	{
		int element = (*stack_b)->content;
		int index = get_index_of_max_and_nearest(element, *stack_a);
		//printf("index : %d\n", index);
		transfer_to_stack_a(index, stack_a, stack_b);
		//tba3_steck_b(*stack_b);
		//tba3_steck_a(*stack_a);
		i--;
	}
	push_min_to_top(stack_a);
}