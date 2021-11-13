/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:46:13 by schahid           #+#    #+#             */
/*   Updated: 2021/11/05 13:55:20 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i ;
	size_t	j ;

	i = 0 ;
	if (dstsize)
	{
		j = dstsize - 1 ;
		while (src[i] && j--)
		{
			dst[i] = src[i];
			i++ ;
		}
		dst[i] = '\0' ;
	}
	return (ft_strlen(src));
}
