
#include "push_swap.h"

static int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
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
	free(s1);
	return (p);
}