/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:54:54 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/04 16:39:37 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*all_buffer(char *str, int fd)
{
	char	*buffer;
	int		count;

	count = 1;
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	while (count != 0 && !ft_strchr(str, '\n'))
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count == -1)
			return (free(str), free(buffer), NULL);
		buffer[count] = '\0';
		str = ft_strjoin_get(str, buffer);
		if (str == NULL)
			return (free(buffer), NULL);
	}
	return (free(buffer), str);
}

char	*one_line(char *str)
{
	char	*len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	len = malloc(i + 1);
	if (len == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		len[j++] = str[i++];
	if (str[i] == '\n')
		len[j++] = '\n';
	len[j] = '\0';
	return (len);
}

char	*rest(char *str)
{
	char	*s;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	s = malloc(ft_strlen(str) - i + 1);
	if (s == NULL)
		return (NULL);
	if (str[i++] != '\n')
		i++;
	while (str[i] != '\0')
		s[j++] = str[i++];
	s[j] = '\0';
	free(str);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*aff;

	if (fd == -500)
	{
		free(str);
		return (NULL);
	}
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = all_buffer(str, fd);
	if (str == NULL)
		return (NULL);
	aff = one_line(str);
	str = rest(str);
	return (aff);
}
