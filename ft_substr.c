#include "libft.h"

static size_t	ft_len(char const *s, unsigned int start, size_t lenstr)
{
	size_t		len1;
	size_t		len2;

	len1 = 0;
	len2 = ft_strlen(s);
	if (start < len2)
	{
		len1 = len2 - start;
		if (len1 > lenstr)
			len1 = lenstr;
	}
	return (len1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sy;
	size_t	i;
	size_t	len_s;

	sy = NULL;
	if (s)
	{
		len = ft_len(s, start, len);
		sy = ft_calloc(len + 1, sizeof(*sy));
	}
	if (sy)
	{
		len_s = ft_strlen(s);
		i = 0;
		while (start < len_s && i < len)
		{
			sy[i] = s[start];
			start++;
			i++;
		}
	}
	return (sy);
}
