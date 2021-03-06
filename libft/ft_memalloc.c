/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:18:01 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/28 11:18:04 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates size amount of bytes of memory as zero
*/

void	*ft_memalloc(size_t size)
{
	char	*returnable;
	size_t	i;

	returnable = (char*)malloc(sizeof(char) * size);
	if (returnable == NULL)
		return (NULL);
	i = 0;
	ft_bzero(returnable, size);
	return ((void*)returnable);
}
