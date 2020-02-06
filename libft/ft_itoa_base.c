#include "libft.h"

/*
** turns intiger value to char, using the base given.*
*/

char		*ft_itoa_base(long long int n, int base)
{
	static char		*str;
	int				w;

	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_base_length(n, base) + 1))))
	{
		w = ft_define_base_length(n, base) - 1;
		str[w + 1] = ('\0');
		if (n < 0)
		{
			str[0] = ('-');
			n = n * (-1);
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
