#include "libft.h"

/*
** turns intiger value to char, using the base given.
*/

int	ft_llmin(int base)
{
	int	returnable;
	long long int	int_min;

	int_min = -9223372036854775807;
	returnable = ft_define_base_length((int_min - base + 1), base);
	return(returnable + 2);
}

int	ft_define_base_length(long long int n, int base)
{
	int i;
	long long int	int_min;

	int_min = -9223372036854775807;
	i = 1;
	if (n < int_min)
		return(ft_llmin(base));
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

char		*ft_llintmin_itoa(unsigned long long int base)
{
	char			*returnable;

	if (base == 10)
		returnable = ft_strdup("-9223372036854775808");
	if (base == 8)
		returnable = ft_strdup("-777777777777777777777");
	if (base == 16)
		returnable = ft_strdup("-7FFFFFFFFFFFFFFF");
	return(returnable);
}

char		*ft_itoa_base(long long int n, unsigned long long int base, int sign)
{
	static char				*str;
	int						w;
	unsigned long long int	number;
	long long int	int_min;

	int_min = -9223372036854775807;
	w = ft_define_base_length(n, base) - 1;
	if (n <= int_min)
			return(ft_llintmin_itoa(base));
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
		number = (unsigned long long int)n;
		while (number >= base)
		{
			if (number % base <= 9)
				str[w--] = ((number % base) + '0');
			else
				str[w--] = ((number % base) - 10 + 'a');
			number = number / base;
		}
		str[w] = number + '0';
		return (str);
	}
	return (NULL);
}
