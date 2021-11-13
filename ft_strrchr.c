/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:47:31 by schahid           #+#    #+#             */
/*   Updated: 2021/11/05 15:02:19 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*z;
	char	*str;
	int		i ;

	z = NULL;
	str = (char *)s;
	i = 0 ;
	while (*str)
	{
		if (*str == c)
		{
			z = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		return (str);
	}
	return (z);
}
