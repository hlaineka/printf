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

	test = ft_strdup("Test string");
	test2 = ft_strdup("def");
	pf = 0;
	ft = 0;
	i = 5;
	c = 'c';
	num = 10.235685345;
	if (argc == 2)
	{
		ft = ft_printf(RED "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_RED "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf(RED "Hello world" RESET);
		printf("\n");
		printf("%i\n", pf);
		
		ft = ft_printf(BLACK "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_BLACK "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(GREEN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_GREEN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		ft = ft_printf(YELLOW "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_YELLOW "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BLUE "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_BLUE "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		ft = ft_printf(MAGENTA "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_MAGENTA "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(CYAN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BRIGHT_CYAN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		


		ft = ft_printf(BG_RED "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_RED "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		pf = printf(BG_RED "Hello world" RESET);
		printf("\n");
		printf("%i\n", pf);
		
		ft = ft_printf(BG_BLACK "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_BLACK "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_GREEN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_GREEN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		ft = ft_printf(BG_YELLOW "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_YELLOW "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BLUE "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_BLUE "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		ft = ft_printf(BG_MAGENTA "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_MAGENTA "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_CYAN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BG_BRIGHT_CYAN "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(YELLOW BOLD "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(RED UNDERLINE "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');

		ft = ft_printf(BLUE REVERSED "Hello world" RESET);
		ft_putchar('\n');
		ft_putnbr(ft);
		ft_putchar('\n');
		
		
	}
	return(1);
}