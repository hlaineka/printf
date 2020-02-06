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

static char	*char_width(char *string, int width, t_tags *command)
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

static char *char_editor(char *printable, t_tags *command)
{
	if (command->width != -1)
		printable = char_width(printable, command->width, command);
	return(printable);
}

int			print_c(t_tags *command, va_list *source)
{
	char	*printable;
	char	aquired;
	int		returnable;
	
	returnable = 0;
	aquired = (char)va_arg(*source, int);
	printable = ft_strnew(1);
	printable[0] = aquired;
	printable = char_editor(printable, command);
	ft_putstr(printable);
	returnable = returnable + ft_strlen(printable);
	return(ft_strlen(printable));
}