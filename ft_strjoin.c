/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:47:51 by schahid           #+#    #+#             */
/*   Updated: 2021/11/08 18:25:04 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s ;
	int		i ;
	int		j ;

	if (!s1 || !s2)
		return (NULL);
	s = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	i = 0 ;
	j = 0 ;
	while (s1[i])
		s[j++] = s1[i++];
	i = 0 ;
	while (s2[i])
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}
