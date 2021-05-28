#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
		str++;
	if (c == '\0')
		return (str);
	while (--str >= s)
		if (*str == c)
			return (str);
	return (NULL);
}
