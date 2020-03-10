/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:42:34 by hlaineka          #+#    #+#             */
/*   Updated: 2020/03/10 12:43:15 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** reallocation of a string. Allocates space for the new string and copies the
** source string from index start to end. Frees the old string.
*/

char		*ft_str_realloc(char *src, int start, int end)
{
	char	*new_str;

	new_str = ft_strsub(src, start, end);
	free(src);
	return (new_str);
}
