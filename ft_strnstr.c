#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[j])
		j++;
	while (len && *haystack)
	{
		i = 0;
		while (i < j && i < len && *(unsigned char *)(haystack + i)
				== *(unsigned char*)(needle + i))
		{
			if (*(unsigned char *)(needle + i + 1) == '\0')
				return ((char *)(haystack));
			i++;
		}
		haystack++;
		len--;
	}
	return ((char *) NULL);
}
