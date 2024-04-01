/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:47:11 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/01 13:42:22 by ayoub-abn        ###   ########.fr       */
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

long				ft_atoi(const char *str);
void				ft_putstr_fd(char *s, int fd);
int					ft_isdigit(int c);
char				*ft_strjoin(char const *s1, char const *s2);

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);

char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strdup(const char *s1);

size_t				ft_strlen(const char *s);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(int content);

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

#endif