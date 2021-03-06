/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpaste_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:49:44 by hlaineka          #+#    #+#             */
/*   Updated: 2020/03/10 12:50:05 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** pastes the string (form end to beginning) in src to the dest.
** (from end to beginning)
*/

void		ft_strpaste_end(char *dest, char *src)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (src[i] != '\0')
		i++;
	while (dest[w] != '\0')
		w++;
	while (i >= 0 && w >= 0)
		dest[w--] = src[i--];
}
