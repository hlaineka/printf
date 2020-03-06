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
		ft = ft_printf("%i\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%i\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%d is %s\n", 1, "one");
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%d\n", 2147483647);
		ft_putnbr(ft);
		ft_putchar('\n');

		//5
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%d\n", 2147483648);
		ft_putnbr(ft);
		ft_putchar('\n');

		
		ft_printf("test %i: ", test_number);
		test_number++;ft = ft_printf("%d\n", -2147483648);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%d\n", -2147483649);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');



		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//10
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+d\n", 4);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+d\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+d\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+d\n", 424242424242424242);
		ft_putnbr(ft);
		ft_putchar('\n');

		//15
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% +d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% +d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+ d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');



		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+ d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%  +d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//20
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%  +d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+  d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+  d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% ++d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//25
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%0d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%00d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%05d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%0+5d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//30
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%05d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-5d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-05d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%d %d %d %d gg!\n", 1, -2, 33, 42, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%4.15d\n", 42);
		ft_putnbr(ft);
		ft_putchar('\n');

		//35
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.2d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.10d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%10.5d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-10.5d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+10.5d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		//40
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-+10.5d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%03.2d\n", -1);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5.d %5.0d\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% 10.5d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%+10.5d\n", 4242);
		ft_putnbr(ft);
		ft_putchar('\n');

		//45
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%03.2d\n", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%03.2d\n", 1);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("test: %.d %.0d\n", 0, 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lld\n", 9223372036854775807);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lld\n", -9223372036854775808);
		ft_putnbr(ft);
		ft_putchar('\n');
		
		//50
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%03.2d\n", -1);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%08.5i", 34);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%0-10.5i", -216);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%08.3d", -8473);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%08.5u", 34);
		ft_putnbr(ft);
		ft_putchar('\n');

		//55
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%08.5u", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%08.3u", 8375);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%0-8.5u", 34);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lu", 22337203685477);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%llu", 22337203685477);
		ft_putnbr(ft);
		ft_putchar('\n');

		//60
		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lu", 22337203685477ul);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%37llu", 522337203685470ull);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%.0u", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%5.0u", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%-5.u", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("% u", 4294967295);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lu",22337203685477);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("%lu",223372036854762);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
		ft = ft_printf("{% 03d}", 0);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
						ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
				ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
						ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
				ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
						ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');

		ft_printf("test %i: ", test_number);
		test_number++;
				ft = ft_printf("% ++d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');
	}
	return(1);
}