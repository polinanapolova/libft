#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str2 < str1)
		while (len--)
			str1[len] = str2[len];
	else
		ft_memcpy(str1, str2, len);
	return (dst);
}
