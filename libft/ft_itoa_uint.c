#include "libft.h"

int	ft_define_uint_length(uintmax_t n, unsigned int	base)
{
	int 			i;

	i = 0;
	while ((n / base) > 0)
	{
		i++;
		n = n / base;
	}
	i++;
	return (i);
}

char		*ft_itoa_uint(uintmax_t n, unsigned int	base)
{
	static char		*str;
	int				w;

	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_uint_length(n, base) + 1))))
	{
		w = ft_define_uint_length(n, base) - 1;
		str[w + 1] = ('\0');
		while (n >= base)
		{
			str[w--] = ((n % base) + '0');
			n = n / base;
		}
		str[w] = n + '0';
		return (str);
	}
	return (NULL);
}