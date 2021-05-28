#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*n;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		size++;
	n = malloc(sizeof(char) * (size + 1));
	if (!n)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		n[i] = s1[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
