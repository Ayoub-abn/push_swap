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
int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	**stack_b;
	//int		i = 0;
	int		*array;
    int p = 15;
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	fill_stack_a(stack_a, av, ac);
	array = sort_array(fill_array(*stack_a), *stack_a);
	index_in_list(*stack_a, array);
    push_a_to_b(stack_a,stack_b,p);
    push_b_to_a(stack_b,stack_a);

    // printf("max = %d  ",max_num(*stack_b));
	//tba3_steck_a(*stack_a);
   
    
	// i = 0;
	//////////////tbi3 array/////////
	// while (i < ft_lstsize(*stack_a))
	// {
	// 	printf("array sort : %d \n", array[i]);
	// 	i++;
	// }
    free(array);
    free_stack(stack_a);
    free_stack(stack_b);
    free(stack_a);
    free(stack_b);
	return (0);
}
