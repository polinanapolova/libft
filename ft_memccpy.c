#include	"libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char)c || str2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
