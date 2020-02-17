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
		printf("%i\n", pf);

		pf = printf("%i\n", 42);
		printf("%i\n", pf);

		pf = printf("%d is %s\n", 1, "one");
		printf("%i\n", pf);

		pf = printf("%d\n", 2147483647);
		printf("%i\n", pf);

		pf = printf("%d\n", 2147483648);
		printf("%i\n", pf);

		pf = printf("%d\n", -2147483648);
		printf("%i\n", pf);

		pf = printf("%d\n", -2147483649);
		printf("%i\n", pf);

		pf = printf("% d\n", 42);
		printf("%i\n", pf);

		pf = printf("% d\n", -42);
		printf("%i\n", pf);

		pf = printf("%+d\n", 4);
		printf("%i\n", pf);

		pf = printf("%+d\n", 0);
		printf("%i\n", pf);

		pf = printf("%+d\n", -42);
		printf("%i\n", pf);



		pf = printf("%+d\n", 0);
		printf("%i\n", pf);

		pf = printf("%+d\n", 424242424242424242);
		printf("%i\n", pf);

		pf = printf("% +d\n", 42);
		printf("%i\n", pf);

		pf = printf("% +d\n", -42);
		printf("%i\n", pf);

		pf = printf("%+ d\n", 42);
		printf("%i\n", pf);

		pf = printf("%+ d\n", -42);
		printf("%i\n", pf);

		pf = printf("%  +d\n", 42);
		printf("%i\n", pf);

		pf = printf("%  +d\n", -42);
		printf("%i\n", pf);

		pf = printf("%+  d\n", 42);
		printf("%i\n", pf);

		pf = printf("%+  d\n", -42);
		printf("%i\n", pf);

		pf = printf("% ++d\n", 42);
		printf("%i\n", pf);

		pf = printf("% ++d\n", -42);
		printf("%i\n", pf);

		pf = printf("%0d\n", -42);
		printf("%i\n", pf);

		pf = printf("%00d\n", -42);
		printf("%i\n", pf);

		pf = printf("%5d\n", 42);
		printf("%i\n", pf);

		pf = printf("%05d\n", 42);
		printf("%i\n", pf);

		pf = printf("%0+5d\n", 42);
		printf("%i\n", pf);

		pf = printf("%05d\n", -42);
		printf("%i\n", pf);

		pf = printf("%-5d\n", 42);
		printf("%i\n", pf);

		pf = printf("%-05d\n", 42);
		printf("%i\n", pf);

		pf = printf("%d %d %d %d gg!\n", 1, -2, 33, 42, 0);
		printf("%i\n", pf);

		pf = printf("%4.15d\n", 42);
		printf("%i\n", pf);

		pf = printf("%.2d\n", 4242);
		printf("%i\n", pf);

		pf = printf("%.10d\n", 4242);
		printf("%i\n", pf);

		pf = printf("%10.5d\n", -42);
		printf("%i\n", pf);

		pf = printf("%-10.5d\n", 4242);
		printf("%i\n", pf);

		pf = printf("%+10.5d\n", 4242);
		printf("%i\n", pf);

		pf = printf("%-+10.5d\n", 4242);
		printf("%i\n", pf);

		pf = printf("%03.2d\n", -1);
		printf("%i\n", pf);

		pf = printf("%5.d %5.0d\n", 0, 0);
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