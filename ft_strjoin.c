/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:56:10 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/03/29 00:02:23 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lin;
	char	*p;
	int		i;
	int		j;

	lin = my_strlen(s1) + my_strlen(s2);
	i = 0;
	j = 0;
	p = malloc((lin + 2) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
    p[i++] = ' ';
	p[i] = '\0';
	return (p);
}