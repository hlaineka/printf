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
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%i\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%i\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d is %s\n", 1, "one");
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d\n", 2147483647);
		printf("%i\n", pf);

		//5
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d\n", 2147483648);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d\n", -2147483648);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d\n", -2147483649);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% d\n", -42);
		printf("%i\n", pf);

		//10
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+d\n", 4);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+d\n", 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+d\n", -42);
		printf("%i\n", pf);


		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+d\n", 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+d\n", 424242424242424242);
		printf("%i\n", pf);

		//15
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% +d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% +d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+ d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+ d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%  +d\n", 42);
		printf("%i\n", pf);

		//20
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%  +d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+  d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+  d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% ++d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

		//25
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%0d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%00d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%5d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%05d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%0+5d\n", 42);
		printf("%i\n", pf);

		//30
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%05d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-5d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-05d\n", 42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%d %d %d %d gg!\n", 1, -2, 33, 42, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%4.15d\n", 42);
		printf("%i\n", pf);

		//35
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.2d\n", 4242);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%.10d\n", 4242);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%10.5d\n", -42);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-10.5d\n", 4242);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+10.5d\n", 4242);
		printf("%i\n", pf);

		//40
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%-+10.5d\n", 4242);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%03.2d\n", -1);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%5.d %5.0d\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("% 10.5d\n", 4242);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%+10.5d\n", 4242);
		printf("%i\n", pf);

		//45
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%03.2d\n", 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%03.2d\n", 1);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("test: %.d %.0d\n", 0, 0);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%lld\n", 9223372036854775807);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%lld\n", -9223372036854775808);
		printf("%i\n", pf);

		//50
		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%03.2d\n", -1);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

						pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

						pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

						pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

						pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

						pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

				pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

		
	}
	return(1);
}