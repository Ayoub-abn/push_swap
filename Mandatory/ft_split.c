/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:51 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/29 00:27:06 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**free_list(char **str, int n)
{
	while (n > 0)
		free(str[--n]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		n;

	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != '\0' && s[i] != c && j++ >= 0)
			i++;
		ptr[n++] = ft_substr(s, i - j, j);
		if (ptr[n - 1] == NULL)
			return (free_list(ptr, n));
	}
	ptr[n] = NULL;
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	unsigned int	l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l || len == 0)
		return (ft_strdup(""));
	if (len > l - start)
		len = l - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
