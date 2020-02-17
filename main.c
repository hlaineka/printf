#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*test;
	char	*test2;
	int		i;
	char	c;
	int		pf;
	int		ft;

	test = ft_strdup("abc");
	test2 = ft_strdup("def");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	if (argc == 2)
	{
		pf = printf("%i\n", -42);
		ft = ft_printf("%i\n", -42);
		printf("%i\n", pf);
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf("%i\n", 42);
		ft = ft_printf("%i\n", 42);
		printf("%i\n", pf);
		ft_putnbr(ft);
		ft_putchar('\n');		
		
		ft = ft_printf("%10.5d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');
	}
	return(1);
}