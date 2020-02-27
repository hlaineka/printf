/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:24:47 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:24:48 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"                                          

static char	*string_width(char *string, int width, t_tags *command)
{
	char	*returnable;
	
	if ((int)ft_strlen(string) < width)
	{
		returnable = ft_strset(' ', width);
		if(command->flag_minus)
			ft_strpaste(returnable, string);
		else
			ft_strpaste(&returnable[width - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
}

static char	*string_precision(char *string, int precision)
{
	char	*returnable;

	if ((int)ft_strlen(string) > precision)
	{
		returnable = (char*)malloc(sizeof(char) * (precision + 1));
		returnable = ft_strncpy(returnable, string, precision);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

static char *string_editor(char *printable, t_tags *command)
{
	if (command->precision != -1)
		printable = string_precision(printable, command->precision);
	if (command->width != -1)
		printable = string_width(printable, command->width, command);
	return(printable);
}

int			print_s(t_tags *command, va_list *source)
{
	char	*printable;
	char	*aquired;

	aquired = va_arg(*source, char*);
	if (aquired == NULL)
	{
		ft_putstr("(null)");
		return(6);
	}
	printable = ft_strdup(aquired);
	printable = string_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}