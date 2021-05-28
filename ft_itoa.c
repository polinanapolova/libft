#include "libft.h"

static int	ft_lenInt(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

static unsigned int	ft_negN(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

static int	ft_numNeg(int n)
{
	if (n >= 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int				neg;
	unsigned int	num;
	char			*str;
	int				len;

	len = ft_lenInt(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	num = ft_negN(n);
	neg = ft_numNeg(n);
	str[len--] = '\0';
	while (num)
	{
		str[len--] = num % 10 + '0';
		num = num / 10;
	}
	str[len] = num % 10 + '0';
	if (neg == 0)
		str[0] = '-';
	return (str);
}
