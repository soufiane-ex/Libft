/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:04:09 by schahid           #+#    #+#             */
/*   Updated: 2021/11/09 14:31:38 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i ;
	size_t	j ;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0 ;
	while (haystack[i])
	{
		j = 0 ;
		while (haystack[i + j] == needle[j] && (len > (i + j)))
		{
			j++ ;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++ ;
	}
	return (NULL);
}
