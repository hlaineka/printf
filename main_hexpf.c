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
		/*printf("test %i: ", test_number);
		test_number++;
		pf = printf("%p, %p\n", test3, test4);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%30p, %p\n", test3, test4);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-30p, %p\n", test3, test4);
		printf("%i\n", pf);*/

		//pf = printf("%.5p, %p\n", test, test2);
		//ft = ft_printf("%.5p, %p\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		//ft_putnbr(ft);
		//ft_putchar('\n');

		//x 1
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%x, %x\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%30x, %30x\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-30x, %-30x\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.7x, %.7x\n", test, test2);
		printf("%i\n", pf);

		//5
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.3x, %.3x\n", test, test2);
		printf("%i\n", pf);

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

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#x, %#x\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#8x, %#8x\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%x\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%lx\n", 4294967296);
		printf("%i\n", pf);

		//10
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%llx\n", 9223372036854775807);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%llx\n", 9223372036854775808);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%010x\n", 542);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#llx\n", 9223372036854775807);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#x\n", 0);
		printf("%i\n", pf);

		//15
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#08x\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#-08x\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#.x %#.0x\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.x %.0x\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%5.x %5.0x\n", 0, 0);
		printf("%i\n", pf);

		//X 20
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%X, %X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%30X, %30X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-30X, %-30X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.7X, %.7X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.3X, %.3X\n", test, test2);
		printf("%i\n", pf);

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

		//25
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#X, %#X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#8X, %#8X\n", test, test2);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%X\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%lX\n", 4294967296);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%llX\n", 9223372036854775807);
		printf("%i\n", pf);

		//30
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%llX\n", 9223372036854775808);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%010X\n", 542);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#llX\n", 9223372036854775807);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#X\n", 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#08X\n", 42);
		printf("%i\n", pf);

		//35
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#.X %#.0X\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.X %.0X\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%5.X %5.0X\n", 0, 0);
		printf("%i\n", pf);


		//o
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%5o\n", 41);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%05o\n", 42);
		printf("%i\n", pf);

		//40
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-5o\n", 2500);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#6o\n", 2500);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-#6o\n", 2500);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-05o\n", 2500);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-5.10o\n", 2500);
		printf("%i\n", pf);

		//45
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("test: %o\n", 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("test: %5.o %5.0o\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("test: %#.o %#.0o\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("test: %.10o\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#X\\n", 1000);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%x\\n", 505);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%#.3o", 1);
		printf("%i\n", pf);
	}
	return(1);
}