/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:24:38 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:24:39 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*pointer_width(char *string, int width, t_tags *command)
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

static char *pointer_editor(char *printable, t_tags *command)
{
	if (command->width != -1)
		printable = pointer_width(printable, command->width, command);
	return(printable);
}

int			print_p(t_tags *command, va_list *source)
{
	void	*pointer;
	char	*printable;
	
	pointer = (void*)malloc(sizeof(void*));
	pointer = va_arg(*source, void*);
	printable = ft_itoa_base((long long int)(pointer), 16);
	printable = ft_strjoin("0x", printable);
	printable = pointer_editor(printable, command);
	ft_putstr(printable);
	return(ft_strlen(printable));
}