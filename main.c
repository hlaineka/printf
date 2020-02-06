#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*test;
	char	*test2;
	int		i;
	char	c;

	test = ft_strdup("abc");
	test2 = ft_strdup("def");
	i = 5;
	c = 'c';
	if (argc == 2)
	{
		printf("%%");
		ft_printf("%%");
		ft_putchar('\n');

		printf("%5%");
		ft_printf("%5%");
		ft_putchar('\n');
		
		printf("%-5%");
		ft_printf("%-5%");
		ft_putchar('\n');

		printf("%.0%");
		ft_printf("%.0%");
		ft_putchar('\n');

		printf("%%", "test");
		ft_printf("%%", "test");
		ft_putchar('\n');

		printf("%   %", "test");
		ft_printf("%   %", "test");
		ft_putchar('\n');

		printf("%s \n", argv[1]);
		ft_printf("%s \n", argv[1]);
		ft_putchar('\n');
		
		printf("String %s \n", test);
		ft_printf("String %s \n", test);
		ft_putchar('\n');

		printf("%-5s %-5s \n", test, test2);
		ft_printf("%-5s %-5s \n", test, test2);
		ft_putchar('\n');

		printf("%5s %5s \n", test, test2);
		ft_printf("%5s %5s \n", test, test2);
		ft_putchar('\n');

		printf("%.1s %.1s \n", test, test2);
		ft_printf("%.1s %.1s \n", test, test2);
		ft_putchar('\n');

		printf("%.0s %.0s \n", test, test2);
		ft_printf("%.0s %.0s \n", test, test2);
		ft_putchar('\n');

		printf("%10s is a string", "this");
		ft_printf("%10s is a string", "this");

		printf("%5.2s is a string", "this");
		ft_printf("%5.2s is a string", "this");

		printf("%10s is a string", "");
		ft_printf("%10s is a string", "");

		printf("%5.2s is a string", "");
		ft_printf("%5.2s is a string", "");

		printf("%-10s is a string", "this");
		ft_printf("%-10s is a string", "this");

		printf("%-5.2s is a string", "this");
		ft_printf("%-5.2s is a string", "this");

		printf("%-10s is a string", "");
		ft_printf("%-10s is a string", "");

		ft_printf("%-5.2s is a string", "");

		ft_printf("@moulitest: %s", NULL);

		ft_printf("%.2c", NULL);

		printf("%c, %c\n", c, c);
		ft_printf("%c, %c\n", c, c);
		ft_putchar('\n');

		printf("%5c, %5c\n", c, c);
		ft_printf("%5c, %5c\n", c, c);
		ft_putchar('\n');		

		ft_printf("@moulitest: %c", 0);

		ft_printf("%2c", 0);

		ft_printf("null %c and text", 0);

		ft_printf("% c", 0);

		printf("%p, %p\n", test, test2);
		ft_printf("%p, %p\n", test, test2);
	}
	return(1);
}