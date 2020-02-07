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

int			print_x(t_tags *command, va_list *source)
{
	unsigned int	hexa;
	char			*printable;
	
	hexa = va_arg(*source, unsigned int);
	if (command->specifier == 'x')
		printable = ft_itoa_base((long long int)hexa, 16, TRUE);
	ft_putstr(printable);
	return(ft_strlen(printable));
}