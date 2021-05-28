#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while ((*str == '\t') || (*str == '\v')
		|| (*str == '\n') || (*str == '\r') || (*str == '\f') || (*str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j = -j;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (i < 0 && j < 0)
			return (0);
		if (i < 0 && j > 0)
			return (-1);
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * j);
}
