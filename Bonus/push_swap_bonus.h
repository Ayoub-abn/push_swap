/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:43:42 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 15:58:50 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char				*ft_strjoin_get(char *s1, char *s2);
char				*ft_strchr(const char *s, int c);
char				*get_next_line(int fd);
int					ft_strcmp(const char *s1, const char *s2);
/////////////////////////////////////////////////////////////////

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	int				index;
}					t_list;

/////////////////////////////loot//////////////////////////////////
long				ft_atoi(const char *str);
void				check_sp(char *av, t_list **stack_a, t_list **stack_b,
						char *str);
void				check_db(t_list **stack_a, t_list **stack_b, char **strs,
						int num);
void				ft_putstr_fd(char *s, int fd);
int					ft_isdigit(int c);
char				*ft_strjoin(char *s1, char *s2);
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
void				rrr(t_list **stack_a, t_list **stack_b);
void				rrb(t_list **stack_b);
void				sb(t_list **stack_b);
void				sa(t_list **stack_a);
void				ss(t_list **stack_a, t_list **stack_b);
void				reverse_rotate(t_list **stack);
void				swap(t_list **stack);
void				rotate(t_list **stack);
/////////////////////////////sort//////////////////////////////////
// int					max_num(t_list *stack_b);
// void				is_sort(t_list **stack_a, t_list **stack_b);
// void				three_numbers(t_list **stack_a);
// void				index_in_list(t_list *stack_a, int *arry);
// void				for_numbers(t_list **stack_a, t_list **stack_b);
// void				fiv_numbers(t_list **stack_a, t_list **stack_b);
void				fill_stack_a(t_list **stack_a, char **av, int ac);
// void				sort(t_list **stack_a, t_list **stack_b, int *array, int p);
// int					get_index_of_max(t_list *stack_b);
// void				push_b_to_a(t_list **stack_a, t_list **stack_b);
// void				push_a_to_b(t_list **stack_a, t_list **stack_b, int p);
//////////////////////////tkharbi9////////////////////////////////
void				tba3_steck_b(t_list *stack_b);
void				tba3_steck_a(t_list *stack_a);

/////////////////////////array////////////////////////////////
// int					*fill_array(t_list *stack_a);
// int					*sort_array(int *array, t_list *stack_a);
/////////////////////////free/////////////////////////////////
void				free_stack(t_list **stack);
void				free_stack_error(t_list **stack_a, t_list **stack_b);
void				free_strs(char **strs);

#endif