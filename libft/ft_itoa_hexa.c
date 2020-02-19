#include "libft.h"

/*
** turns intiger value to char, using the base given.
*/

static int	ft_define_hexa_length(unsigned long long int n)
{
	int i;
	int	base;

	i = 1;
	base = 16;
	while ((n / base) > 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

char		*ft_itoa_hexa(unsigned long long int n)
{
	static char				*str;
	int						w;
	unsigned long long int	base;
	//unsigned long int		number;

	base = 16;
	/*if (n < 0)
	{
		number = n * -1;
		number = ~number;
		number = number + 1;
	}
	else
		number = (unsigned long int)n;*/
	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_hexa_length(n) + 1))))
	{
		/*if(n == 0)
		{	
			str[0] = '\0';
			return(str);
		}*/
		w = ft_define_hexa_length(n) - 1;
		str[w + 1] = ('\0');
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
