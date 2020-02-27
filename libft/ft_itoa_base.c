#include "libft.h"

/*
** turns intiger value to char, using the base given.
*/

int	ft_define_base_length(long long int n, int base)
{
	int i;
	long long int	int_min;

	int_min = -9223372036854775807;
	i = 1;
	if (n < int_min)
		return(20);
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while ((n / base) > 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

char		*ft_itoa_base(long long int n, long long int base, int sign)
{
	static char				*str;
	int						w;
	long long int		int_min;

	int_min = -9223372036854775807;
	w = ft_define_base_length(n, base) - 1;
	if (n < int_min)
			return(ft_strdup("-9223372036854775808"));
	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_base_length(n, base) + 1))))
	{
		str[w + 1] = ('\0');
		if (sign)
		{
			if (n < 0)
			{
				str[0] = ('-');
				n = n * (-1);
			}
		}
		while (n >= base)
		{
			if (n % base <= 9)
				str[w--] = ((n % base) + '0');
			else
				str[w--] = ((n % base) - 10 + 'a');
			n = n / base;
		}
		str[w] = n + '0';
		return (str);
	}
	return (NULL);
}
