/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:13:01 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/04 02:13:10 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tba3_steck_a(t_list *stack_a)
{
	t_list	*tmp;

	printf("\n-------------------A---------------\n");
	tmp = stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n----------------------------------\n");
}

void	tba3_steck_b(t_list *stack_b)
{
	t_list	*tmp;

	printf("\n-------------------b---------------\n");
	tmp = stack_b;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n----------------------------------\n");
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

int	max_number(t_list *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (max < a->content)
			max = a->content;
		a = a->next;
	}
	return (max);
}

void	three_numbers(t_list **stack_a)
{
	int		max;
	t_list	*tmp;

	tmp = *stack_a;
	max = max_number(tmp);
	if (max == tmp->next->content)
		rra(stack_a);
	else if (tmp->content == max)
		ra(stack_a);
	tmp = *stack_a;
	if (tmp->content > tmp->next->content)
		sa(stack_a);
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
	{
		j = get_index_of_max(head);
	}
	return (j);
}
