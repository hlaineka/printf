#include "libft/libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	char	*line2;
	int		i;

	fd = 0;
	i = 0;
	if (argc == 2)
	{
		fd =  open(argv[1], O_RDONLY);
		while (get_next_line(fd, &line))
		{
			i++;
			if (get_next_line(fd, &line2))
			{
				i++;
				if (ft_strcmp(line, line2) != 0)
				{
					ft_putstr("lines ");
					ft_putnbr(i - 1);
					ft_putstr(" and ");
					ft_putnbr(i);
					ft_putendl(" are not the same.");
				}
			}
		}
	}
}