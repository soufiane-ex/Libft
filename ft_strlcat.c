/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:55:03 by schahid           #+#    #+#             */
/*   Updated: 2021/11/16 18:14:46 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	lens;

	lens = ft_strlen(src);
	i = 0;
	if (dst)
	{
		while (*dst && dstsize)
		{
			dstsize--;
			i++;
			dst++;
		}
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize != 0)
	{
		*dst = 0;
	}
	return (i + lens);
}
