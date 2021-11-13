/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:18:50 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 18:22:19 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str ;
	char	z ;

	str = (char *)s ;
	z = (char) c ;
	while (*str != z)
	{
		if (*str == '\0')
			return (0);
		str++ ;
	}
	return (&(*str));
}
