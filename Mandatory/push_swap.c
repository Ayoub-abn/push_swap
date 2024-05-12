/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:31 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/05 23:35:26 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sort(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
		{
			return ;
		}
		tmp = tmp->next;
	}
	free_stack(stack_a);
	exit(0);
}

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;
	int		p;

	p = 30;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		exit(0);
	fill_stack_a(&stack_a, av, ac);
	size = ft_lstsize(stack_a);
	if (size == 1)
		(free_stack(&stack_a), exit(0));
	is_sort(&stack_a);
	sort_2_to_5(&stack_a, &stack_b, size);
	if (size > 5 && size < 500)
		p = 15;
	sort(&stack_a, &stack_b, p);
}
