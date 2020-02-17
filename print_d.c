/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:23:57 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:23:58 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static char	*int_width(char *string, int width, t_tags *command)
{
	char	*returnable;
	
	if ((int)ft_strlen(string) < width)
	{
		if (command->flag_zero)
		{	
			returnable = ft_strset('0', width);
			if (!ft_isdigit(string[0]))
				returnable = ft_char_str_join(string[0], returnable);
		}
		else
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

static char	*int_precision(char *string, t_tags *command)
{
	char	*returnable;
	 
	if ((int)ft_strlen(string) < command->precision)
	{
		returnable = ft_strset('0', command->precision);
		if (!ft_isdigit(string[0]))
			returnable = ft_char_str_join(string[0], returnable);
		ft_strpaste_digits(&returnable[ft_strlen(returnable) - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

char		*add_intspace(char *string)
{
	char	*returnable;

	if (ft_isdigit(string[0]))
		returnable = ft_strjoin_frees2(" ", string);
	else
		return(string);
	return(returnable);
	
}

static char *int_editor(char *printable, t_tags *command, int original)
{
	if (command->flag_plus && original >= 0)
		printable = ft_strjoin_frees2("+", printable);
	if (command->flag_space)
		printable = add_intspace(printable);
	if (command->precision != -1)
		printable = int_precision(printable, command);
	if (command->width != -1)
		printable = int_width(printable, command->width, command);
	return(printable);
}

int			print_d(t_tags *command, va_list *source)
{
	char	*printable;
	int		aquired;

	aquired = va_arg(*source, int);
	printable = ft_itoa_base(aquired, 10);
	printable = int_editor(printable, command, aquired);
	ft_putstr(printable);
	return(ft_strlen(printable));
}