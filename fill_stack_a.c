/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:05 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/28 16:05:20 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_list **stack_a,t_list **stack_b,char **av, int ac)
{
	(void) stack_b;
	int		i;
	char	*str;
	char	**strs;
	long		num;

	str = NULL;
	i = 1;
	//// thawel arg l char* o tsplithom
	while (i < ac)
	{
		
		check_sp(av[i],stack_a,stack_b,str);
		str = ft_strjoin(str, av[i++]);
	}
	i = 0;
	////katbda t3amer f stack_a (kathawlhom l int)
	strs = ft_split(str, ' ');
	free(str);
	while (strs[i] != NULL)
	{
		num = ft_atoi(strs[i++]);
		check_db(stack_a,stack_b,strs,num);
		
		if(num == -2147483649)
		{
			free_stack_error(stack_a,stack_b);
			free_strs(strs);
			exit(1);		
		}
		ft_lstadd_back(stack_a, ft_lstnew((int)num));
	}
	free_strs(strs);
	
}
