/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:29:51 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 16:57:27 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i ;
	unsigned char	*s1 ;
	unsigned char	*s2 ;

	i = 0 ;
	s1 = (unsigned char *)str1 ;
	s2 = (unsigned char *)str2 ;
	if (!n)
		return (0);
	if ((!*s1 || !*s2) && n)
		return (*s1 - *s2);
	while (i < n)
	{
		if (s1[i] != s2[i] || !s1[i] || !s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
