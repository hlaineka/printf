#include "ft_printf.h"
#include <stdio.h>

char		*ft_itoa_float(long double n, t_tags *command)
{
	char			*str1;
	char			*str2;
	char			*returnable;
	long long int	number;
	int				i;

	number = n;
	str1 = ft_itoa_base(number, 10, TRUE);
	if (n < 0)
	{
		n = n * -1;
		number = number * -1;
	}
	i = 1;
	if (NULL != (str2 = (char*)malloc(sizeof(char) * 20)))
	{
		str2[20] = '\0';
		if (command->precision != 0)
			str2[0] = '.';
		n = n - number;
		while (i < 20)
		{
			n = n * 10;
			number = n;
			str2[i] = (number % 10) + '0';
			i++;
		}
		returnable = ft_strjoin_frees2(str1, str2);
		free(str1);
		return(returnable);
	}
	return(NULL);
}

static char	*float_width(char *string, int width, t_tags *command)
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
			if (!command->positive_value)
				returnable[i] = '-';
			if (command->positive_value && command->flag_plus)
				returnable[i] = '+';
		}
		else
		{
			ft_strpaste(&returnable[width - ft_strlen(string)], string);
			if (!command->positive_value)
				returnable = ft_strjoin_frees2("-", returnable);
			if (command->positive_value && command->flag_plus)
				returnable = ft_strjoin_frees2("+", returnable);
		}
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return(returnable);
}

static char	*float_precision(char *string, t_tags *command)
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

char		*ft_trim(char *str, t_tags *command)
{
	int		i;
	int		w;
	char	*returnable;

	if (command->length_L)
		i = 18;
	else if (command->precision != -1)
		i = command->precision;
	else
		i = 6;
	w = 0;
	while (str[w] != '.')
		w++;
	i = i + w + 1;
	while (str[w] != '\0' && w < i)
		w++;
	returnable = ft_str_realloc(str, 0, w);

	return(returnable);
}

long double		ft_round(long double number, t_tags *command)
{
	long double	returnable;
	int				i;
	long double	multiplier;

	multiplier = .5;	
	if (command->length_L)
		i = 18;
	else if (command->precision != -1)
		i = command->precision;
	else
		i = 6;
	while (i > 0)
	{
		multiplier = multiplier / 10;
		i--;
	}
	if (number >= 0)
		returnable = number + multiplier;
	else
		returnable = number - multiplier;
	//ft_putnbr(returnable);
	return(returnable);
}

static char *float_editor(char *printable, t_tags *command)
{
	printable = ft_trim(printable, command);
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
	aquired = ft_round(aquired, command);
	printable = ft_itoa_float(aquired, command);
	printable = float_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}