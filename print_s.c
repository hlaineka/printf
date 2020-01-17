/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:24:47 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:24:48 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			print_s(const char *command, va_list *source)
{
		char	*printable;
		const char	*just_for_gcc;

		just_for_gcc = command;
		printable = va_arg(*source, char*);
		ft_putstr(printable);
		return(ft_strlen(printable));
}