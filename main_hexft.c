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

	test = 4562;
	test2 = 3451345;
	test3 = ft_strdup("asdf");
	test4 = ft_strdup("adsfadsf");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	if (argc == 2)
	{
		//pf = printf("%p, %p\n", test3, test4);
		ft = ft_printf("%p, %p\n", test3, test4);
		//t_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%30p, %p\n", test3, test4);
		ft = ft_printf("%30p, %p\n", test3, test4);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-30p, %p\n", test3, test4);
		ft = ft_printf("%-30p, %p\n", test3, test4);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.5p, %p\n", test, test2);
		//ft = ft_printf("%.5p, %p\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		//ft_putnbr(ft);
		//ft_putchar('\n');

		//x
		//pf = printf("%x, %x\n", test, test2);
		ft = ft_printf("%x, %x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%30x, %30x\n", test, test2);
		ft = ft_printf("%30x, %30x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-30x, %-30x\n", test, test2);
		ft = ft_printf("%-30x, %-30x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.7x, %.7x\n", test, test2);
		ft = ft_printf("%.7x, %.7x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.3x, %.3x\n", test, test2);
		ft = ft_printf("%.3x, %.3x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		/*pf = printf("%+8x, %+8x\n", test, test2);
		ft = ft_printf("%+8x, %+8x\n", test, test2);
		ft_putnbr(pf);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf("% 8x, % 8x\n", test, test2);
		ft = ft_printf("% 8x, % 8x\n", test, test2);
		ft_putnbr(pf);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');*/

		//pf = printf("%#x, %#x\n", test, test2);
		ft = ft_printf("%#x, %#x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%#8x, %#8x\n", test, test2);
		ft = ft_printf("%#8x, %#8x\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//X
		//pf = printf("%X, %X\n", test, test2);
		ft = ft_printf("%X, %X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%30X, %30X\n", test, test2);
		ft = ft_printf("%30X, %30X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-30X, %-30X\n", test, test2);
		ft = ft_printf("%-30X, %-30X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.7X, %.7X\n", test, test2);
		ft = ft_printf("%.7X, %.7X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.3X, %.3X\n", test, test2);
		ft = ft_printf("%.3X, %.3X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		/*pf = printf("%+8x, %+8x\n", test, test2);
		ft = ft_printf("%+8x, %+8x\n", test, test2);
		ft_putnbr(pf);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf("% 8x, % 8x\n", test, test2);
		ft = ft_printf("% 8x, % 8x\n", test, test2);
		ft_putnbr(pf);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');*/

		//pf = printf("%#X, %#X\n", test, test2);
		ft = ft_printf("%#X, %#X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%#8X, %#8X\n", test, test2);
		ft = ft_printf("%#8X, %#8X\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
	}
	return(1);
}