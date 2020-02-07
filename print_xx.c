/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:25:23 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:25:25 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			print_xx(t_tags *command, va_list *source)
{
	void	*pointer;
	char	*printable;
	
	pointer = (void*)malloc(sizeof(void*));
	if (command->specifier == 'p')
		pointer = va_arg(*source, void*);
	printable = ft_itoa_base((long long int)(pointer), 16, FALSE);
	printable = ft_strjoin("0x", printable);
	ft_putstr(printable);
	return(ft_strlen(printable));
}