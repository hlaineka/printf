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
		/*ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%p\n", test3);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		pf = printf("%p\n", test3);
		ft_putnbr(pf);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%30p, %p\n", test3, test4);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-30p, %p\n", test3, test4);
		ft_putnbr(ft);
		ft_putchar('\n');*/

		//pf = printf("%.5p, %p\n", test, test2);
		//ft = ft_printf("%.5p, %p\n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		//ft_putnbr(ft);
		//ft_putchar('\n');

		//x 1
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%x, %x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%30x, %30x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-30x, %-30x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.7x, %.7x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		//5
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.3x, %.3x\n", test, test2);
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

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#x, %#x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#8x, %#8x\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%x\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lx\n", 4294967296);
		ft_putnbr(ft);
		ft_putchar('\n');

		//10
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%llx\n", 9223372036854775807);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%llx\n", 9223372036854775808);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%010x\n", 542);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#llx\n", 9223372036854775807);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#x\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		//15
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#08x\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#-08x\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#.x %#.0x\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.x %.0x\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5.x %5.0x\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		//X 20
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%X, %X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%30X, %30X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-30X, %-30X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.7X, %.7X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.3X, %.3X\n", test, test2);
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

		//25
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#X, %#X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#8X, %#8X\n", test, test2);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%X\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lX\n", 4294967296);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%llX\n", 9223372036854775807);
		ft_putnbr(ft);
		ft_putchar('\n');

		//30
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%llX\n", 9223372036854775808);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%010X\n", 542);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#llX\n", 9223372036854775807);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#X\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#08X\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//35
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#.X %#.0X\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.X %.0X\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5.X %5.0X\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		//o
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5o\n", 41);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%05o\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//40
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-5o\n", 2500);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#6o\n", 2500);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-#6o\n", 2500);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-05o\n", 2500);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-5.10o\n", 2500);
		ft_putnbr(ft);
		ft_putchar('\n');

		//45
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("test: %o\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("test: %5.o %5.0o\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("test: %#.o %#.0o\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("test: %.10o\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#X\\n", 1000);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%x\\n", 505);
		ft_putnbr(ft);
		ft_putchar('\n');
		
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%#.3o", 1);
		ft_putnbr(ft);
		ft_putchar('\n');
	}
	return(1);
}