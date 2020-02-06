/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:23:22 by hlaineka          #+#    #+#             */
/*   Updated: 2020/01/16 12:23:24 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft/libft.h"

/*
** A struct to save all the data about a command
*/
typedef struct	s_tags
{
	char		specifier;
	int			flag_zero;
	int			flag_minus;
	int			flag_plus;
	int			flag_space;
	int			flag_hash;
	int			width;
	int			width_address;
	int			precision;
	int			precision_address;
	int			length;
	int			length_hh;
	int			length_h;
	int			length_l;
	int			length_ll;
	int			length_L;
}				t_tags;

int 		ft_printf(const char *format, ...);
/*
** The fuctions called by selector on ft_printf, main functions
** to handle different data types.
*/
int			print_s(t_tags *command, va_list *source);
int			print_c(t_tags *command, va_list *source);
int			print_p(t_tags *command, va_list *source);
int			print_d(t_tags *command, va_list *source);
int			print_i(t_tags *command, va_list *source);
int			print_o(t_tags *command, va_list *source);
int			print_u(t_tags *command, va_list *source);
int			print_x(t_tags *command, va_list *source);
int			print_xx(t_tags *command, va_list *source);

/*
** Helper functions for print_s
*/


#endif
