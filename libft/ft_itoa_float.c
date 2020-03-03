#include "libft.h"

/*
** turns intiger value to char, using the base given.
*/

char		*ft_itoa_float(long double n)
{
	char			*str1;
	char			*str2;
	char			*returnable;
	long long int	number;
	int				i;

	number = n;
	str1 = ft_itoa_base(number, 10, TRUE);
	if (n < 0)
	{
		n = n * -1;
		number = number * -1;
	}
	i = 1;
	if (NULL != (str2 = (char*)malloc(sizeof(char) * 20)))
	{
		str2[20] = '\0';
		str2[0] = '.';
		n = n - number;
		while (i < 20)
		{
			n = n * 10;
			number = n;
			str2[i] = (number % 10) + '0';
			i++;
		}
		returnable = ft_strjoin_frees2(str1, str2);
		free(str1);
		return(returnable);
	}
	return(NULL);
}
