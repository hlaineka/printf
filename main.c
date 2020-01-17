#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*test;
	int		i;

	test = ft_strdup("abc");
	i = 5;
	if (argc == 2)
	{
		printf("%s \n", argv[1]);
		printf("String %s \n", test);
		ft_printf("String %s \n", test);
		printf("%-5s %-5s \n", test, test);
		printf("%5s %5s \n", test, test);
		printf("%*s %*s \n", i, test, i, test);
		printf("%.*s %.*s \n", 2, test, 2, test);
		printf("%.*s %.*s \n", 5, test, 5, test);
		printf("%-.*s %-.*s \n", 2, test, 2, test);
		printf("%-.*s %-.*s \n", 5, test, 5, test);
	}
	return(1);
}