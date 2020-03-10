/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:25:10 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:25:14 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*hexa_width(char *string, int width, t_tags *command)
{
	char	*returnable;
	int		i;

	i = 0;
	if ((int)ft_strlen(string) < width)
	{
		if (command->flag_zero && !command->flag_minus && command->precision == -1)
			returnable = ft_strset('0', width);
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

static char	*hexa_precision(char *string, t_tags *command)
{
	char	*returnable;
	 
	if (ft_strequ(string, "0") && command->precision == 0)
		returnable = ft_strnew(0);
	else if ((int)ft_strlen(string) <= command->precision)
	{
		returnable = ft_strset('0', command->precision);
		ft_strpaste(&returnable[ft_strlen(returnable) - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

static char	*hexa_hash(char *string, t_tags *command)
{
	char	*returnable;

	if (string[0] == '\0' || (string[0] == '0' && string[1] == '\0'))
		returnable = ft_strdup(string);
	else if (command->flag_zero && command->width != -1)
	{	
		returnable = hexa_width(string, (command->width - 2), command);
		returnable = ft_strjoin_frees2("0x", returnable);
		return(returnable);
	}
	else
		returnable = ft_strjoin("0x", string);
	free(string);
	return(returnable);
}

static char	*hexa_upperalpha(char *string)
{
	int		i;
	char	*returnable;

	returnable = ft_strnew(ft_strlen(string));
	i = 0;
	while (string[i] != '\0')
	{
		if (ft_isalpha(string[i]))
			returnable[i] = ft_toupper(string[i]);
		else
			returnable[i] = string[i];
		i++;
	}
	free(string);
	return(returnable);
}

static char *hexa_editor(char *printable, t_tags *command)
{
	if (command->precision != -1)
		printable = hexa_precision(printable, command);
	if (command->flag_hash)
		printable = hexa_hash(printable, command);
	if (command->width != -1)
		printable = hexa_width(printable, command->width, command);
	if (command->specifier == 'X')
		printable = hexa_upperalpha(printable);
	return(printable);
}

uintmax_t	read_hexa(t_tags *command, va_list *source)
{
	if(command->length_hh)
		return(unsigned char)va_arg(*source, uintmax_t);
	else if(command->length_h)
		return(unsigned short int)va_arg(*source, uintmax_t);
	else if(command->length_l)
		return(unsigned long int)va_arg(*source, uintmax_t);
	else if(command->length_ll)
		return(unsigned long long int)va_arg(*source, uintmax_t);
	else
		return(unsigned int)va_arg(*source, uintmax_t);
}

int			print_x(t_tags *command, va_list *source)
{
	uintmax_t	hexa;
	char					*printable;
	int 					returnable;
	
	hexa = read_hexa(command, source);
	printable = ft_itoa_hexa(hexa);
	printable = hexa_editor(printable, command);
	ft_putstr(printable);
	returnable = ft_strlen(printable);
	free(printable);
	return(returnable);
}