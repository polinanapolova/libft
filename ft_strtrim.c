#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	str = NULL;
	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		i = ft_strlen(s1);
		while (i && ft_strchr(set, s1[i]))
			i--;
		str = ft_substr(s1, 0, i + 1);
	}
	return (str);
}
