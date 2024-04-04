/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:47:11 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/04 02:44:21 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_list;
/////////////////////////////loot//////////////////////////////////
long				ft_atoi(const char *str);
void				ft_putstr_fd(char *s, int fd);
int					ft_isdigit(int c);
char				*ft_strjoin(char const *s1, char const *s2);
/////////////////////////////link_list//////////////////////////////////
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);

size_t				ft_strlen(const char *s);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(int content);
/////////////////////////////split//////////////////////////////////
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s1);

/////////////////////////////moves//////////////////////////////////
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				pb(t_list **static_a, t_list **static_b);
void				pa(t_list **static_b, t_list **static_a);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				sb(t_list **stack_b);
void				sa(t_list **stack_a);
void				ss(t_list **stack_a, t_list **stack_b);
/////////////////////////////sort//////////////////////////////////
int					max_number(t_list *a);
void				three_numbers(t_list **stack_a);
void				fill_stack_a(t_list **stack_a, int ac, char **av);
int					get_index_of_min_and_nearest(int element, t_list *stack_b);
int					get_index_of_max(t_list *stack_b);
void				transfer_to_stack_b(int index, t_list **stack_a,
						t_list **stack_b);


void push_b_to_a (t_list **stack_a, t_list **stack_b);
//////////////////////////tkharbi9////////////////////////////////
void	tba3_steck_b(t_list *stack_b);
void	tba3_steck_a(t_list *stack_a);
#endif