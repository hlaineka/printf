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
		//pf = printf("%%\n");
		ft = ft_printf("%");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		//pf = printf("%%\n");
		ft = ft_printf("%5");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%%\n");
		ft = ft_printf("%05");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		//pf = printf("%%\n");
		ft = ft_printf("%-05");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%%\n");
		ft = ft_printf("%-5");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%%\n");
		ft = ft_printf("%%\n");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%5%\n");
		ft = ft_printf("%5%\n");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		//pf = printf("%-5%\n");
		ft = ft_printf("%-5%\n");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.0%\n");
		ft = ft_printf("%.0%\n");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//printf("%%", "test\n");
		//ft_printf("%%", "test\n");
		//ft_putchar('\n');

		//printf("%   %", "test");
		//ft_printf("%   %", "test");
		//ft_putchar('\n');

		//pf = printf("%s \n", argv[1]);
		ft = ft_printf("%s \n", argv[1]);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		//pf = printf("String %s \n", test);
		ft = ft_printf("String %s \n", test);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-5s %-5s \n", test, test2);
		ft = ft_printf("%-5s %-5s \n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%5s %5s \n", test, test2);
		ft = ft_printf("%5s %5s \n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.1s %.1s \n", test, test2);
		ft = ft_printf("%.1s %.1s \n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%.0s %.0s \n", test, test2);
		ft = ft_printf("%.0s %.0s \n", test, test2);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%10s is a string\n", "this");
		ft = ft_printf("%10s is a string\n", "this");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%5.2s is a string\n", "this");
		ft = ft_printf("%5.2s is a string\n", "this");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%10s is a string\n", "");
		ft = ft_printf("%10s is a string\n", "");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%5.2s is a string\n", "");
		ft = ft_printf("%5.2s is a string\n", "");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-10s is a string\n", "this");
		ft = ft_printf("%-10s is a string\n", "this");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-5.2s is a string\n", "this");
		ft = ft_printf("%-5.2s is a string\n", "this");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-10s is a string\n", "");
		ft = ft_printf("%-10s is a string\n", "");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%-5.2s is a string\n", "");
		ft = ft_printf("%-5.2s is a string\n", "");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%s\n", NULL);
		ft = ft_printf("%s\n", NULL);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//printf("%.2c\n", NULL);
		//ft_printf("%.2c\n", NULL);
		//ft_putchar('\n');

		//pf = printf("%c, %c\n", c, c);
		ft = ft_printf("%c, %c\n", c, c);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%5c, %5c\n", c, c);
		ft = ft_printf("%5c, %5c\n", c, c);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');		

		//pf = printf("test: %c\n", 0);
		ft = ft_printf("test: %c\n", 0);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("%2c\n", 0);
		ft = ft_printf("%2c\n", 0);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("null %c and text\n", 0);
		ft = ft_printf("null %c and text\n", 0);
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//pf = printf("null %c and text\n", 0);
		ft = ft_printf("%4.15s", "42 is the answer");
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		//printf("% c\n", 0);
		//ft_printf("% c\n", 0);
		//ft_putchar('\n');
	}
	return(1);
}