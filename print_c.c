/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:23:48 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:23:49 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	char_width(char printable, t_tags *command)
{
	int		width;

	width = command->width;
	if (command->flag_minus)
	{
		ft_putchar(printable);
		width--;
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
	}
	else
	{
		while (width > 1)
		{
			ft_putchar(' ');
			width--;
		}
		ft_putchar(printable);
	}
	if (command->width == 0)
		return (1);
	else
		return (command->width);
}

static int	char_editor(char printable, t_tags *command)
{
	if (command->width != -1)
		return (char_width(printable, command));
	else
	{
		ft_putchar(printable);
		return (1);
	}
}

int			print_c(t_tags *command, va_list *source)
{
	char	aquired;
	int 	returnable;
	
	aquired = '\0';
	returnable = 0;
	if (command->specifier == '%')
		aquired = '%';
	else
		aquired = (char)va_arg(*source, int);
	returnable = char_editor(aquired, command);
	return (returnable);
}