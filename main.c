#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*test;

	test = ft_strdup("abc");
	if (argc == 2)
	{
		printf("%s", argv[1]);
		printf("Alennuksen osuus on 30%s joka lasketaan kassalla", test);
		ft_printf("Alennuksen osuus on 30%s joka lasketaan kassalla", test);
	}
	return(1);
}