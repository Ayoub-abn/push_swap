/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:13:01 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/04 20:27:43 by ayoub-abn        ###   ########.fr       */
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


