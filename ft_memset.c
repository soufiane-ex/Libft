/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:55:11 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 18:21:54 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i ;
	unsigned char	*p ;

	i = 0 ;
	p = (unsigned char *)b ;
	while (i < len)
	{
		p[i] = c ;
		i++ ;
	}
	return (b);
}
