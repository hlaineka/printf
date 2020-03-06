#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		test;
	int		test2;
	char	*test3;
	char	*test4;
	int		i;
	char	c;
	int		pf;
	int		ft;
	int		test_number;

	test = 4562;
	test2 = 3451345;
	test3 = ft_strdup("asdf");
	test4 = ft_strdup("adsfadsf");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	test_number = 1;
	if (argc == 2)
	{
		pf = printf("%5p, %p\n", test3, test4);
		ft_putnbr(pf);
		ft_putchar('\n');
		ft = ft_printf("%5p, %p\n", test3, test4);
		printf("%i\n", ft);
	}
	//free(test3);
	//free(test4);
}