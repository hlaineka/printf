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
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 573.924);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 23.00041);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 0.000039);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -958.125);
		printf("%i\n", pf);

		printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -0.000001);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", 7.5);
		printf("%i\n", pf);

				printf("test %i: ", test_number);
		test_number++;
		pf = printf("%f", -3.85);
		printf("%i\n", pf);

	}
}