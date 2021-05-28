#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*n;

	n = malloc(size * count);
	if (!n)
		return (NULL);
	ft_memset(n, 0, count * size);
	return (n);
}
