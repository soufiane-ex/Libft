/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:02:09 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 18:02:36 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int					i ;
	const unsigned char	*nstr1;
	const unsigned char	*nstr2;

	nstr1 = str1 ;
	nstr2 = str2 ;
	i = 0 ;
	while (n > 0)
	{
		if (nstr1[i] - nstr2[i])
		{
			return (nstr1[i] - nstr2[i]);
		}
		n-- ;
		i++ ;
	}
	return (0);
}
