/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:58:00 by schahid           #+#    #+#             */
/*   Updated: 2021/11/13 17:17:39 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i ;
	unsigned char	*p ;

	i = 0 ;
	p = (unsigned char *)s ;
	while (n--)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++ ;
	}
	return (NULL);
}
