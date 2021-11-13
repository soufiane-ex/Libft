/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:06:21 by schahid           #+#    #+#             */
/*   Updated: 2021/11/11 16:23:08 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p ;
	char	*b;
	size_t	i;

	i = 0 ;
	p = (char *)dst ;
	b = (char *)src ;
	if (p == NULL && b == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len-- > 0)
			p[len] = b[len];
	}
	else
	{
		while (i < len)
		{
			p[i] = b[i];
			i++ ;
		}
	}
	return (dst);
}
