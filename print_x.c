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

static int	ft_define_hexa_length(unsigned long long int n)
{
	int i;
	int	base;

	i = 1;
	base = 16;
	while ((n / base) > 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

char		*ft_itoa_hexa(unsigned long long int n, t_tags *command)
{
	static char				*str;
	int						w;
	unsigned long long int	base;

	base = 16;
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
	if (NULL != (str = (char*)malloc(sizeof(char) * (ft_define_hexa_length(n) + 1))))
	{
		w = ft_define_hexa_length(n) - 1;
		str[w + 1] = ('\0');
		while (n >= base)
		{
			if (n % base <= 9)
				str[w--] = ((n % base) + '0');
			else
				str[w--] = ((n % base) - 10 + 'a');
			n = n / base;
		}
		if (n <= 9)
			str[w--] = n + '0';
		else
			str[w--] = n - 10 + 'a';
		return (str);
	}
	return (NULL);
}

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
		//free(string);
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

unsigned long long int	read_hexa(t_tags *command, va_list *source)
{
	unsigned long long int	returnable;
	
	if(command->length_hh)
	{
		returnable = va_arg(*source, int);
		returnable = (unsigned char)returnable;
	}
	else if(command->length_h)
	{	
		returnable = va_arg(*source, int);
		returnable = (unsigned short int)returnable;
	}
	else if(command->length_l)
		returnable = va_arg(*source, unsigned long int);
	else if(command->length_ll)
		returnable = va_arg(*source, unsigned long long int);
	else
		returnable = va_arg(*source, int);
	returnable = (unsigned long long int)returnable;
	return(returnable);
}

int			print_x(t_tags *command, va_list *source)
{
	unsigned long long int	hexa;
	char					*printable;
	int 					returnable;
	
	hexa = read_hexa(command, source);
	printable = ft_itoa_hexa(hexa, command);
	printable = hexa_editor(printable, command);
	ft_putstr(printable);
	returnable = ft_strlen(printable);
	free(printable);
	return(returnable);
}