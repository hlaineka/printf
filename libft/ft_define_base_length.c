#include "libft.h"

/*
** to be used with ft_itoa_base
*/

int	ft_define_base_length(long long int n, int base)
{
	int i;

	i = 1;
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