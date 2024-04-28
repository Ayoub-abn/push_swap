/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 01:12:49 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/28 16:05:38 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (*stack)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
		free(*stack);
		*stack = tmp;
	}
}

void	free_stack_error(t_list **stack_a,t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (*stack_a)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
		free(*stack_a);
		*stack_a = tmp;
	}
	free(stack_a);
	free(stack_b);
}

void free_strs(char **strs)
{
    int i = 0;
    
    while (strs[i])
    {
        free(strs[i]);
        i++;
    }
    free(strs);
}


void free_no_error(t_list **stack_a,t_list **stack_b)
{
    free_stack(stack_a);
	free(stack_a);
	free(stack_b);
}

