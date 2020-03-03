/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:24:57 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:25:00 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


int	ft_define_uint_length(unsigned long long int n)
{
	int 			i;
	unsigned int	base;

	base = 10;
	i = 1;
	while ((n / base) > 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

char		*ft_itoa_uint(unsigned long long int n, t_tags *command)
{
	static char		*str;
	int				w;
	unsigned int	base;

	base = 10;
	if (command->length_hh)
		n = (unsigned char)n;
	else if (command->length_h)
		n = (unsigned short int) n;
	else if (command->length_l)
		n = (unsigned long int) n;
	else if (command->length_ll)
		n = (unsigned long long int) n;
	else
		n = (unsigned int)n;
	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_uint_length(n) + 1))))
	{
		w = ft_define_uint_length(n) - 1;
		str[w + 1] = ('\0');
		while (n >= base)
		{
			str[w--] = ((n % base) + '0');
			n = n / base;
		}
		str[w] = n + '0';
		return (str);
	}
	return (NULL);
}


static char	*uint_width(char *string, int width, t_tags *command)
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
		else if (command->flag_zero)
		{
			ft_strpaste_digits(&returnable[width - ft_strlen(string)], string);
			while (returnable[i] == ' ')
					i++;
			if (i > 0)
				i--;
			if (command->positive_value && command->flag_plus)
				returnable[i] = '+';
		}
		else
			ft_strpaste(&returnable[width - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
}

static char	*uint_precision(char *string, t_tags *command)
{
	char	*returnable;
	 
	if (ft_strequ(string, "0") && command->precision == 0)
		returnable = ft_strnew(0);
	else if (ft_strequ(string, "+0") && command->precision == 0)
		returnable = ft_strdup("+");
	else if ((int)ft_strlen(string) <= command->precision)
	{
		returnable = ft_strset('0', command->precision);
		ft_strpaste_digits(&returnable[ft_strlen(returnable) - ft_strlen(string)], string);
		if (!ft_isdigit(string[0]))
			returnable = ft_char_str_join(string[0], returnable);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
	
}

char		*add_uintspace(char *string)
{
	char	*returnable;

	if (ft_isdigit(string[0]))
		returnable = ft_strjoin_frees2(" ", string);
	else
		return(string);
	return(returnable);
	
}

static char *uint_editor(char *printable, t_tags *command, int original)
{
	if (command->flag_plus && original >= 0)
		printable = ft_strjoin_frees2("+", printable);
	if (command->flag_space)
		printable = add_uintspace(printable);
	if (command->precision != -1)
		printable = uint_precision(printable, command);
	if (command->width != -1)
		printable = uint_width(printable, command->width, command);
	return(printable);
}

unsigned long long int	read_uint(t_tags *command, va_list *source)
{
	unsigned long long int	returnable;
	
	if(command->length_hh)
	{
		returnable = va_arg(*source, unsigned int);
		returnable = (unsigned char)returnable;
	}
	else if(command->length_h)
	{	
		returnable = va_arg(*source, unsigned int);
		returnable = (unsigned short int)returnable;
	}
	else if(command->length_l)
		returnable = va_arg(*source, unsigned long int);
	else if(command->length_ll)
		returnable = va_arg(*source, unsigned long long int);
	else
		returnable = va_arg(*source, unsigned int);
	returnable = (unsigned long long int)returnable;
	return(returnable);
}

int			print_u(t_tags *command, va_list *source)
{
	char	*printable;
	int		aquired;

	aquired = read_uint(command, source);
	printable = ft_itoa_uint(aquired, command);
	printable = uint_editor(printable, command, aquired);
	ft_putstr(printable);
	return(ft_strlen(printable));
}