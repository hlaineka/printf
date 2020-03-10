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
		return (print_s(command, source));
	if (specifier == 'c' || specifier == '%')
		return (print_c(command, source));
	if (specifier == 'p')
		return (print_p(command, source));
	if (specifier == 'x' || specifier == 'X')
		return (print_x(command, source));
	if (specifier == 'd' || specifier == 'i')
		return (print_d(command, source));
	if (specifier == 'u')
		return (print_u(command, source));
	if (specifier == 'o')
		return (print_o(command, source));
	if (specifier == 'f')
		return (print_f(command, source));
	return (0);
}

static int	is_specifier(char c)
{
	if (c == 's' || c == 'c' || c == 'p' || c == 'd'
	|| c == 'i' || c == 'o' || c == 'u' || c == 'x'
	|| c == 'X' || c == '%' || c == 'f')
		return (TRUE);
	return (FALSE);
}

static int	check_command(const char *format, t_tags *command, va_list *source)
{
	int		w;

	w = 1;
	while (format[w] != '\0' && !is_specifier(format[w]))
	{
		if (format[w] == '-' || format[w] == '+' || format[w] == ' ' ||
		format[w] == '#' || (command->precision == -1 && command->width == -1
		&& !command->flag_zero && format[w] == '0'))
			set_flag(command, format[w]);
		else if (ft_isdigit(format[w]) || format[w] == '*')
			if (command->precision == -1)
				set_width(command, format[w], source);
			else
				set_precision(command, format[w], source);
		else if (format[w] == '.')
			set_precision(command, format[w], source);
		else if (format[w] == 'h' || format[w] == 'l' || format[w] == 'L')
			set_length(command, format[w]);
		w++;
	}
	if (format[w] == '\0' || !is_specifier(format[w]))
		command->empty = TRUE;
	else
		command->specifier = format[w];
	return (w);
}

int			ft_printf(const char *format, ...)
{
	va_list source;
	int		i;
	t_tags	*command;
	int		printed;

	va_start(source, format);
	command = (t_tags*)malloc(sizeof(t_tags));
	printed = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			initialize_command(command);
			i = i + check_command(&format[i], command, &source);
			if (command->empty)
				break ;
			printed = printed + selector(command, &source);
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
	return (printed);
}
