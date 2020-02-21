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
		if (command->flag_zero && !command->flag_minus)
		{	
			returnable = ft_strset('0', width);
			//if (!ft_isdigit(string[0]))
			//	returnable = ft_char_str_join(string[0], returnable);
		}
		else
			returnable = ft_strset(' ', width);
		if(command->flag_minus)
			ft_strpaste(returnable, string);
		else if (command->flag_zero)
		{
			ft_strpaste_digits(&returnable[width - ft_strlen(string)], string);
			if (!command->positive_value)
				returnable[0] = '-';
			if (command->positive_value && command->flag_plus)
				returnable[0] = '+';
		}
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
		ft_strpaste_digits(&returnable[ft_strlen(returnable) - ft_strlen(string)], string);
		if (!ft_isdigit(string[0]) && command->width < command->precision)
			returnable = ft_char_str_join(string[0], returnable);
		if (!ft_isdigit(string[0]) && command->width >= command->precision)
			returnable[0] = string[0];
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

char		*add_intspace(char *string, t_tags *command)
{
	char	*returnable;

	if (ft_isdigit(string[0]))
	{	
		if (command->flag_zero)
			returnable = ft_strjoin_frees2("0", string);
		else
			returnable = ft_strjoin_frees2(" ", string);
	}
	else
		return(string);
	return(returnable);
	
}

static char *int_editor(char *printable, t_tags *command)
{
	if (command->flag_plus && command->positive_value)
		printable = ft_strjoin_frees2("+", printable);
	if (command->flag_space && command->positive_value)
		printable = add_intspace(printable, command);
	if (command->precision != -1)
		printable = int_precision(printable, command);
	if (command->width != -1)
		printable = int_width(printable, command->width, command);
	return(printable);
}

long long int	read_int(t_tags *command, va_list *source)
{
	long long int	returnable;
	
	if(command->length_hh)
		returnable = (signed char)va_arg(*source, int);
	else if(command->length_h)
		returnable = (short int)va_arg(*source, int);
	else if(command->length_l)
		returnable = va_arg(*source, long int);
	else if(command->length_ll)
		returnable = va_arg(*source, long long int);
	else
		returnable = va_arg(*source, int);
	returnable = (long long int)returnable;
	return(returnable);
}

int			print_d(t_tags *command, va_list *source)
{
	char	*printable;
	int		aquired;

	aquired = read_int(command, source);
	if (aquired >= 0)
		command->positive_value = TRUE;
	printable = ft_itoa_base(aquired, 10, TRUE);
	printable = int_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}