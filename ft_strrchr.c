/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:47:31 by schahid           #+#    #+#             */
/*   Updated: 2021/11/13 17:40:09 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i ;

	i = ft_strlen (s);
	while ((unsigned char)s[i] != (unsigned char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)(s + i));
}
