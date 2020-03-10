#include "ft_printf.h"

void	initialize_command(t_tags *command)
{
	command->specifier = '\0';
	command->positive_value = FALSE; 
	command->flag_zero = FALSE;;
	command->flag_minus = FALSE;
	command->flag_plus = FALSE;
	command->flag_space = FALSE;
	command->flag_hash = FALSE;
	command->width = -1;
	command->width_address = FALSE;
	command->precision = -1;
	command->precision_address = FALSE;
	command->length = -1;
	command->length_hh = FALSE;
	command->length_h = FALSE;
	command->length_l = FALSE;
	command->length_ll = FALSE;
	command->length_lll = FALSE;
	command->empty = FALSE;
}

void	set_flag(t_tags *command, char flag)
{
	if (flag == '0')
		command->flag_zero = TRUE;
	else if (flag == '-')
		command->flag_minus = TRUE;
	else if (flag == '+')
		command->flag_plus = TRUE;
	else if (flag == ' ')
		command->flag_space = TRUE;
	else if (flag == '#')
		command->flag_hash = TRUE;
	return;
}

void	set_width(t_tags *command, char c, va_list *source)
{
	int		value;
	char	character[2];

	if (c == '*')
	{	
		command->width = va_arg(*source, int);
		command->width_address = TRUE;
		if (command->width < 0)
		{	
			command->width = -1 * command->width;
			command->flag_minus = TRUE;
		}
	}
	else
	{	
		if (command->width_address == TRUE)
		{
			command->width = 0;
			command->width_address = FALSE;
		}
		character[0] = c;
		character[1] = '\0';
		value = ft_atoi(character);
		if (command->width == -1)
			command->width = 0;
		command->width = command->width * 10 + value;
	}
}

void	set_precision(t_tags *command, char c, va_list *source)
{
	int		value;
	char	character[2];

	if (c == '.')
	{
		command->precision = 0;
		return;
	}
	if (c == '*')
	{
		command->precision = va_arg(*source, int);
		command->precision_address = TRUE;
		if (command->precision < 0)
		{	
			command->precision = -1 * command->precision;
			if (command->precision > command->width)
				command->precision = command->width;
			command->flag_minus = TRUE;
		}
	}
	else
	{
		if (command->precision_address == TRUE)
		{
			command->precision = 0;
			command->precision_address = FALSE;
		}
		character[0] = c;
		character[1] = '\0';
		value = ft_atoi(character);
		if (command->precision == -1)
			command->precision = 0;
		command->precision = command->precision * 10 + value;
	}
}

void	set_length(t_tags *command, char c)
{
	if (c == 'h')
		if (command->length_h)
		{
			command->length_hh = TRUE;
			command->length_h = FALSE;
		}
		else
			command->length_h = TRUE;
	else if (c == 'l')
		if (command->length_l)
			{
				command->length_ll = TRUE;
				command->length_l = FALSE;
			}
			else
				command->length_l = TRUE;
	else
		command->length_lll = TRUE;
}