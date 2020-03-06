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
	long double num;

	test = ft_strdup("abc");
	test2 = ft_strdup("def");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	num = 10.235685345;
	if (argc == 2)
	{
		pf = printf("%%\n");
		ft = ft_printf("%2.9p", 1234);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%2.9p", 1234);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		pf = printf("%%\n");
		ft = ft_printf("%9.2p", 1234);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%9.2p", 1234);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		pf = printf("%%\n");
		ft = ft_printf("%.0p, %.p", test, test2);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%.0p, %.p", test, test2);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);

				pf = printf("%%\n");
		ft = ft_printf("%-5");
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%-5");
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);

		/*pf = printf("%%\n");
		ft = ft_printf("%f", -3.85);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%f", -3.85);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		//pf = printf("%%\n");
		ft = ft_printf("%08.5u", 34);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%08.5u", 34);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		
		//pf = printf("%%\n");
		ft = ft_printf("%08.5i", 34);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%08.5i", 34);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);

		//pf = printf("%%\n");
		ft = ft_printf("%0-10.5i", -216);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%0-10.5i", -216);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);

		//pf = printf("%%\n");
		ft = ft_printf("%08.3d", -8473);
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%08.3d", -8473);
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		//pf = printf("%%\n");
		ft = ft_printf("testi ilman typea %5");
		ft_putchar('\n');
		//ft_putnbr(pf);
		//ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("testi ilman typea %5");
		printf("\n");
		//ft = ft_printf("%%\n");
		printf("%i\n", pf);
		
		//ft_printf("%5u", 4294967294);
		*/
		
		//ft_printf("%f\n", 0.0004);
		//printf("%f\n", 0.0004);

		//ft_printf("%#08x\n", 42);
		//ft_printf("%#-08x\n", 42);
		
		/*ft_printf("%ld\n", 2147483648);
		ft_printf("%ld\n", -2147483649);
		ft_printf("%lld\n", 9223372036854775807);
		ft_printf("%lld\n", -9223372036854775808);*/
		
		/*//pf = printf("%5u", 4294967295);
		ft = ft_printf("%5u", 4294967295);
		//printf("%i\n", pf);
		ft_putnbr(ft);
		ft_putchar('\n');
		
		pf = printf("%i\n", -42);
		ft = ft_printf("%i\n", -42);
		printf("%i\n", pf);
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf("%i\n", 42);
		ft = ft_printf("%i\n", 42);
		printf("%i\n", pf);
		ft_putnbr(ft);
		ft_putchar('\n');		
		
		ft = ft_printf("%10.5d\n", -42);
		ft_putnbr(ft);
		ft_putchar('\n');*/
	}
	return(1);
}