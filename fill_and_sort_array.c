/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_sort_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:09 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/25 20:10:01 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_array(t_list *stack_a)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * ft_lstsize(stack_a));
	while (stack_a)
	{
		array[i] = stack_a->content;
		//printf("array : %d\n", array[i]);
		i++;
		stack_a = stack_a->next;
	}
	return (array);
}

int	*sort_array(int *array, t_list *stack_a)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < ft_lstsize(stack_a) - 1)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	// i = 0;
	// while (i < ft_lstsize(stack_a))
	// {
	// 	printf("array sort : %d \n", array[i]);
	// 	i++;
	// }
	return (array);
}
