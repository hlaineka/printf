#include "ft_printf.h"
#include <stdio.h>


static char	*float_width(char *string, int width, t_tags *command)
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

static char	*float_precision(char *string, t_tags *command)
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

char		*add_floatspace(char *string, t_tags *command)
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

char		*round_and_trim(char *str, t_tags *command)
{
	int		i;
	int		w;
	char	*returnable;
	char	c;

	c = '0';
	if (command->length_L)
		i = 18;
	else if (command->precision != -1)
		i = command->precision;
	else
		i = 9;
	w = 0;
	while (str[w] != '\0' && w < i)
		w++;
	if (str[w] != '\0')
		c = str[w];
	returnable = ft_str_realloc(str, 0, w);
	w--;
	if (c >= '5')
		returnable[w] = returnable[w + 1];
	while ((returnable[w] >= '5' || returnable[w] == '.') && returnable[w] != '\0')
	{
		if (returnable[w] != '.')
			returnable[w] = returnable[w] + 1;
		w++;
	}
	return(returnable);
}

static char *float_editor(char *printable, t_tags *command)
{
	printable = round_and_trim(printable, command);
	if (command->flag_plus && command->positive_value)
		printable = ft_strjoin_frees2("+", printable);
	if (command->flag_space && command->positive_value)
		printable = add_floatspace(printable, command);
	if (command->precision != -1)
		printable = float_precision(printable, command);
	if (command->width != -1)
		printable = float_width(printable, command->width, command);
	return(printable);
}

long double	read_float(t_tags *command, va_list *source)
{
	long double	returnable;
	
	if(command->length_L)
		returnable = va_arg(*source, long double);
	else
		returnable = (long double)va_arg(*source, double);
	return(returnable);
}

int			print_f(t_tags *command, va_list *source)
{
	char		*printable;
	long double	aquired;

	aquired = read_float(command, source);
	if (aquired >= 0)
		command->positive_value = TRUE;
	printable = ft_itoa_float(aquired);
	printable = float_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}