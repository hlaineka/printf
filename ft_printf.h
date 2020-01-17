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

int 		ft_printf(const char *format, ...);
int			print_s(const char *command, va_list *source);
int			print_c(const char *command, va_list *source);
int			print_p(const char *command, va_list *source);
int			print_d(const char *command, va_list *source);
int			print_i(const char *command, va_list *source);
int			print_o(const char *command, va_list *source);
int			print_u(const char *command, va_list *source);
int			print_x(const char *command, va_list *source);
int			print_xx(const char *command, va_list *source);

#endif
