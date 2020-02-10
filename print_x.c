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

static char	*hexa_precision(char *string, int precision)
{
	char	*returnable;

	if ((int)ft_strlen(string) < precision)
	{
		returnable = ft_strset('0', precision);
		ft_strpaste(&returnable[precision - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

static char	*hexa_hash(char *string)
{
	char	*returnable;

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
	if (command->flag_hash)
		printable = hexa_hash(printable);
	if (command->precision != -1)
		printable = hexa_precision(printable, command->precision);
	if (command->width != -1)
		printable = hexa_width(printable, command->width, command);
	if (command->specifier == 'X')
		printable = hexa_upperalpha(printable);
	return(printable);
}

int			print_x(t_tags *command, va_list *source)
{
	unsigned int	hexa;
	char			*printable;
	
	hexa = va_arg(*source, unsigned int);
	printable = ft_itoa_base((long long int)hexa, 16, TRUE);
	printable = hexa_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}