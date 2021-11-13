/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <schahid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:12:39 by schahid           #+#    #+#             */
/*   Updated: 2021/11/13 14:11:18 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*src;
	size_t			o;
	unsigned int	k;

	o = len;
	k = 0;
	src = (char *)malloc(len + 1);
	if (!src || !s)
		return (NULL);
	if (ft_strlen(s) < start || s == NULL)
		return (ft_strdup(""));
	k = (unsigned int)ft_strlen(s);
	while (s && len > 0)
	{
		*src++ = s[start];
		start++;
		len--;
	}
	*src = '\0';
	src = src - o;
	return (src);
}
