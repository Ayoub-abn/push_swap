
#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		i;
	char	*str;
	char	**strs;
	t_list	**stack_a;
	t_list	**stack_b;
	int		num;
	t_list	*tmp;
	int		l;

	////////////////////////t3mar dyal stack_a///////////////////////////////
	i = 1;
	stack_a = malloc(sizeof(t_list));
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		strs = ft_split(str, ' ');
		i++;
	}
	i = 0;
	while (strs[i])
	{
		num = ft_atoi(strs[i]);
		ft_lstadd_back(stack_a, ft_lstnew(num));
		i++;
	}
	////////////////////////////tbi3 stack_a////////////////////////////////
	printf("\n-------------------A---------------\n");
	tmp = *stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	// ////////////////////////////t3mar stack_b/////////////////////////////
	stack_b = malloc(sizeof(t_list));
	l = 1;
	while (l < 6)
	{
		ft_lstadd_back(stack_b, ft_lstnew(l));
		l++;
	}
	// ///////////////////////////tbi3 stack_b///////////////////////////////
	printf("\n-------------------B---------------\n");
	tmp = *stack_b;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n-------------------moves---------------\n");
	ss(stack_a, stack_b);
	printf("\n-------------------A_3awtani------------\n");
	tmp = *stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n-------------------b_3awtani-------------\n");
	tmp = *stack_b;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("\n-------------------moves---------------\n");
	sa(stack_a);
	printf("\n-------------------A_3awtani------------\n");
	tmp = *stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}