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
	int		test_number;

	test = ft_strdup("abc");
	test2 = ft_strdup("def");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	test_number = 1;
	if (argc == 2)
	{
		//1
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 7.5);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 573.924);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 23.00041);
		ft_putnbr(ft);
		ft_putchar('\n');

		//5
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 0.000039);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -958.125);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -0.000001);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.3f", -0.00032);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#.0f", 7.4);
		ft_putnbr(ft);
		ft_putchar('\n');

		//10
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#.0f", -7.4);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.0f", 1.0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%Lf", -985.765426499l);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%Lf", 0.08942555l);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

		//15
				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 7.5);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 7.5);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 7.5);
		ft_putnbr(ft);
		ft_putchar('\n');

		//20
				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", 7.5);
		ft_putnbr(ft);
		ft_putchar('\n');

				ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%f", -3.85);
		ft_putnbr(ft);
		ft_putchar('\n');

		while (1);

	}
}