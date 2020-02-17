#include "libft.h"

/*
** pastes the digits of the string in src to the beginning of the dest. 
** Does not add \0
*/
void		ft_strpaste_digits(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (ft_isdigit(src[i]))
			dest[i] = src[i];
		i++;
	}
}