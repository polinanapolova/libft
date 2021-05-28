#include "libft.h"

static size_t	str_length(char const *s, char c)
{
	size_t	res;

	res = 0;
	while (*(unsigned char *)s && *(unsigned char *)s != c)
	{
		res++;
		s++;
	}
	return (res);
}

static size_t	str_count(char const *s, char c)
{
	size_t	res;

	res = 0;
	while (*s)
	{
		if (*s != c)
		{
			res++;
			while (*s != c && *s)
				s++;
			s--;
		}
		s++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;

	res = NULL;
	if (!s)
		return (NULL);
	count = 0;
	res = (char **)malloc((str_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			res[count] = ft_substr(s, 0, str_length(s, c));
			s += str_length(s, c);
			count++;
		}
		else
			s++;
	}
	res[count] = NULL;
	return (res);
}
