/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crazy_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:35:03 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/01 17:07:27 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	int		i;
	int		sin;
	long	res;

	i = 0;
	sin = 1;
	res = 0;
	while (str[i] == ' ' && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sin = -1;
		if (str[i] == '+' || str[i] == '-')
			return (ft_putstr_fd("Error\n", 2), -2147483649);
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = res * 10 + (str[i++] - '0');
		if (res * sin > 2147483647 || res * sin < -2147483648)
			return (ft_putstr_fd("Error\n", 2), -2147483649);
	}
	////////nsitha
	if (str[i] || str[i - 1] == '-' || str[i - 1] == '+')
		return (ft_putstr_fd("Error\n", 2), -2147483649);
	return (res * sin);
}

void	check_sp(char *av, t_list **stack_a, char *str)
{
	int	i;

	i = 0;
	while (av[i] == ' ' && av[i])
	{
		i++;
	}
	if (av[i] == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(stack_a);
		free(str);
		exit(255);
	}
}

void	check_db(t_list **stack_a, char **strs, int num)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->content == num)
		{
			ft_putstr_fd("Error\n", 2);
			free_stack_error(stack_a);
			free_strs(strs);
			exit(255);
		}
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
