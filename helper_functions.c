/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:06:23 by hlaineka          #+#    #+#             */
/*   Updated: 2020/03/11 15:06:25 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	int_width_flag_zero(char *returnable, char *string, t_tags *command)
{
	int		i;

	i = 0;
	ft_strpaste_digits(&returnable[command->width - ft_strlen(string)], string);
	while (returnable[i] == ' ')
		i++;
	if (i > 0)
		i--;
	if (!command->positive_value)
		returnable[i] = '-';
	if (command->positive_value && command->flag_plus)
		returnable[i] = '+';
	if (command->positive_value && command->flag_space && i == 0)
		returnable[i] = ' ';
}
