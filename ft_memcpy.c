/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:22:35 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 18:21:31 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i ;
	unsigned char	*nsrc ;
	unsigned char	*ndest ;

	nsrc = (unsigned char *)src ;
	ndest = (unsigned char *)dest ;
	i = 0 ;
	if (ndest == NULL && nsrc == NULL)
		return (NULL);
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++ ;
	}
	return (dest);
}
