/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:31 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/28 18:48:54 by aabdenou         ###   ########.fr       */
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
		// printf("num %d indix %d\n", tmp->content,tmp->index);
		printf("num %d \n", tmp->content);
		tmp = tmp->next;
	}
}
///mazl ma mefhomach
void	index_in_list(t_list *stack_a, int *arry)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		i = 0;
		while (tmp->content != arry[i])
		{
			i++;
		}
		tmp->index = i;
		tmp = tmp->next;
	}
}
///mazl ma mefhomach
void is_sort(t_list **stack_a,t_list **stack_b)
{
	t_list *tmp = *stack_a;
	while (tmp->next)
	{
		if(tmp->content > tmp->next->content)
		{
			return;
		}
		tmp = tmp->next;
	}
	free_no_error(stack_a,stack_b);
	exit(0);
}
int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		*array = NULL;
	int		size;
	int		p = 30;
	
	if(ac <= 1)
		exit(0);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	fill_stack_a(stack_a, stack_b ,av, ac);
	
	size = ft_lstsize(*stack_a);
	if(size == 1)
		(free_no_error(stack_a,stack_b),exit(0));
	is_sort(stack_a,stack_b);
	if (size == 2)
	{
		t_list *tmp = *stack_a;
		if (tmp->content > tmp->next->content)
			sa(stack_a);
		free_no_error(stack_a,stack_b);
		exit(0);
	}
	else if (size == 3)
		(three_numbers(stack_a),free_no_error(stack_a,stack_b),exit(0));
	else if (size == 4 || size == 5)
		(for_numbers(stack_a,stack_b),exit(0));
	else if (size > 5 && size < 500)
		p = 15;
	sort(stack_a,stack_b,array,p);
	return (0);
}
