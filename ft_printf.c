/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:23:03 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:23:10 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	selector(const char *command, va_list *source)
{
	char	specifier;

	specifier = command[ft_strlen(command) - 1];
	if (specifier == 's')
		return(print_s(command, source));
	/*if (specifier == 'c')
		return(print_c(command, source));
	if (specifier == 'p')
		return(print_p(command, source));
	if (specifier == 'd')
		return(print_d(command, source));
	if (specifier == 'i')
		return(print_i(command, source));
	if (specifier == 'o')
		return(print_o(command, source));
	if (specifier == 'u')
		return(print_u(command, source));
	if (specifier == 'x')
		return(print_x(command, source));
	if (specifier == 'X')
		return(print_xx(command, source));
		*/
	return (0);
}

static int	is_type(char c, int i)
{
	if (i == 1 && c == '%')
		return (TRUE);
	if (c == 's' || c == 'c' || c == 'p' || c == 'd'
	|| c == 'i' || c == 'o' || c == 'u' || c == 'x'
	|| c == 'X')
		return (TRUE);
	return (FALSE);
}

/*static int	is_attribute(char c, int i)
{
	if (i == 1 && c == ' ')
		return (TRUE);
	if (c == '0' || c == '1' || c == '2'|| c == '3'|| c == '4'|| c == '5'||
	c == '6'|| c == '7'|| c == '8'|| c == '9'|| c == '.' || c == 'h' || c == 'f' 
	|| c == 'l' || c == 'L' || c == '#' || c == '0' || c == '-' || c == '+')
		return (TRUE);
	return (FALSE);
}
*/
static char	*ft_addchar(char *source, char c)
{
	char	*returnable;

	if (!source)
	{
		if ((returnable = (char*)malloc(sizeof(char) * 2)))
		{
			returnable[0] = c;
			returnable[1] = '\0';
			return(returnable);
		}
		return (NULL);
	}
	if ((returnable = (char*)malloc(sizeof(char) * (ft_strlen(source) + 2))))
	{
		returnable = ft_strcpy(returnable, source);
		returnable[ft_strlen(source)] = c;
		returnable[ft_strlen(source + 1)] = '\0';
		return(returnable);
	}
	return(NULL);
}

int 		ft_printf(const char *format, ...)
{
	va_list source;
	int		i;
	int		w;
	char	*command;
	int		printed;

	i = 0;
	w = 0;
	command = NULL;
	printed = 0;
	va_start(source, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			w = 1;
			while (format[i + w] != '\0' && !is_type(format[i + w], w))
			{
				command = ft_addchar(command, format[i + w]);
				w++;
			}
			if (format[i + w] != '\0' && is_type(format[i + w], w))
				command = ft_addchar(command, format[i + w]);
			i = i + w;
			w = 0;
			if (command)
			{
				printed = printed + selector(command, &source);
				command = NULL;
			}
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(source);
	printed = printed + i;
	return(printed);
}
