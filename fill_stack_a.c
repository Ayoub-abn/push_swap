#include "push_swap.h"



///////////////algo 2////////////////////////
// tmp = *stack_a;
// 		if (tmp->content > tmp->next->content)
// 			sa(stack_a);
//////////////////////////////////////////////

void	three_numbers(t_list **stack_a)
{
	int		max;
	t_list	*tmp;

	tmp = *stack_a;
	max = max_num(tmp);
	if (max == tmp->next->content)
		rra(stack_a);
	else if (tmp->content == max)
		ra(stack_a);
	tmp = *stack_a;
	if (tmp->content > tmp->next->content)
		sa(stack_a);
}

void free_stack(t_list **stack)
{
    t_list *tmp = *stack;
    while(*stack)
    {
        if (tmp != NULL) {
            tmp = tmp->next;
        }
        free(*stack);
        *stack = tmp;
    }
}

void	fill_stack_a(t_list **stack_a, char **av, int ac)
{
	int		i;
	char	*str;
	char	**strs;
	int		num;

	i = 1;
    //// thawel arg l char* o tsplithom
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	i = 0;
    ////katbda t3amer f stack_a (kathawlhom l int)
	strs = ft_split(str, ' ');
	free(str);
	while (strs[i] != NULL)
	{
		num = ft_atoi(strs[i]);
		ft_lstadd_back(stack_a, ft_lstnew(num));
		i++;
	}

	i= 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);

	
}
