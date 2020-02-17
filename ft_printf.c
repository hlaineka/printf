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

static int	selector(t_tags *command, va_list *source)
{
	char	specifier;

	specifier = command->specifier;
	if (specifier == 's')
		return(print_s(command, source));
	if (specifier == 'c' || specifier == '%')
		return(print_c(command, source));
	if (specifier == 'p')
		return(print_p(command, source));
	if (specifier == 'x' || specifier == 'X')
		return(print_x(command, source));
	if (specifier == 'd' || specifier == 'i')
		return(print_d(command, source));
	/*if (specifier == 'u')
		return(print_u(command, source));
	if (specifier == 'o')
		return(print_o(command, source));
		*/
	return (0);
}

static int	is_specifier(char c)
{
	if (c == 's' || c == 'c' || c == 'p' || c == 'd'
	|| c == 'i' || c == 'o' || c == 'u' || c == 'x'
	|| c == 'X' || c == '%')
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

static char	*ft_addchar(char **source, char c)
{
	char	*returnable;

	if (!*source)
	{
		//ft_putstr("inside first if\n");
		if ((returnable = (char*)malloc(sizeof(char) * 2)))
		{
			returnable[0] = c;
			returnable[1] = '\0';
			return(returnable);
		}
		return (NULL);
	}
	if ((returnable = (char*)malloc(sizeof(char) * (ft_strlen(*source) + 2))))
	{
		//ft_putstr("inside second if\n");
		returnable = ft_strcpy(returnable, *source);
		returnable[ft_strlen(*source)] = c;
		returnable[ft_strlen(*source) + 1] = '\0';
		return(returnable);
	}
	return(NULL);
}
*/
static void	initialize_command(t_tags *command)
{
	command->specifier = '\0';
	command->flag_zero = FALSE;;
	command->flag_minus = FALSE;
	command->flag_plus = FALSE;
	command->flag_space = FALSE;
	command->flag_hash = FALSE;
	command->width = -1;
	command->width_address = FALSE;
	command->precision = -1;
	command->precision_address = FALSE;
	command->length = -1;
	command->length_hh = FALSE;
	command->length_h = FALSE;
	command->length_l = FALSE;
	command->length_ll = FALSE;
	command->length_L = FALSE;
}

static void	set_flag(t_tags *command, char flag)
{
	if (flag == '0')
		command->flag_zero = TRUE;
	else if (flag == '-')
		command->flag_minus = TRUE;
	else if (flag == '+')
		command->flag_plus = TRUE;
	else if (flag == ' ')
		command->flag_space = TRUE;
	else if (flag == '#')
		command->flag_hash = TRUE;
	return;
}

static void	set_width(t_tags *command, char c)
{
	int		value;
	char	character[2];

	character[0] = c;
	character[1] = '\0';
	value = ft_atoi(character);
	if (command->width == -1)
		command->width = 0;
	command->width = command->width * 10 + value;
}

static void	set_precision(t_tags *command, char c)
{
	int		value;
	char	character[2];

	if (c == '.')
	{
		command->precision = 0;
		return;
	}
	character[0] = c;
	character[1] = '\0';
	value = ft_atoi(character);
	if (command->precision == -1)
		command->precision = 0;
	command->precision = command->precision * 10 + value;
}

static void	set_length(t_tags *command, char c)
{
	if (c == 'h')
		if (command->length_h)
		{
			command->length_hh = TRUE;
			command->length_h = FALSE;
		}
		else
			command->length_h = TRUE;
	else if (c == 'l')
		if (command->length_l)
			{
				command->length_ll = TRUE;
				command->length_l = FALSE;
			}
			else
				command->length_l = TRUE;
	else
		command->length_L = TRUE;
}

static int	check_command(const char *format, t_tags *command)
{
	int		w;

	w = 1;
	while (format[w] != '\0' && !is_specifier(format[w]))
	{
		if (format[w] == '-' || format[w] == '+' || format[w] == ' ' || format[w] == '#' ||
			(format[w - 1] == '%' && format[w] == '0'))
			set_flag(command, format[w]);
		else if (ft_isdigit(format[w]))
			if (command->precision == -1)
				set_width(command, format[w]);
			else
				set_precision(command, format[w]);
		else if (format[w] == '.')
			set_precision(command, format[w]);
		else if (format[w] == 'h' || format[w] == 'l' || format[w] == 'L')
			set_length(command, format[w]);
		w++;
	}
	if (format[w] != '\0' && is_specifier(format[w]))
		command->specifier = format[w];
	return(w);
}

int 		ft_printf(const char *format, ...)
{
	va_list source;
	int		i;
	int		w;
	t_tags	*command;
	int		printed;

	i = 0;
	w = 0;
	command = (t_tags*)malloc(sizeof(t_tags));
	initialize_command(command);
	printed = 0;
	va_start(source, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			w = check_command(&format[i], command);
			i = i + w;
			printed = printed + selector(command, &source);
			initialize_command(command);
		}
		else
		{	
			ft_putchar(format[i]);
			printed++;
		}
		i++;
	}
	free(command);
	va_end(source);
	return(printed);
}
