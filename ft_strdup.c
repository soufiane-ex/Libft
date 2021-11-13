/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:10:16 by schahid           #+#    #+#             */
/*   Updated: 2021/11/07 16:12:54 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst ;
	int		i ;
	int		l ;

	l = ft_strlen (s1);
	dst = (char *)malloc(sizeof(char) * l + 1);
	if (dst == NULL)
		return (NULL);
	i = 0 ;
	while (i < l)
	{
		dst[i] = s1[i];
		i++ ;
	}
	dst[i] = '\0';
	return (dst);
}
