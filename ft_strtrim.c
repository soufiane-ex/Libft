/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:13:53 by schahid           #+#    #+#             */
/*   Updated: 2021/11/13 14:29:44 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	suffix(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	h;

	i = (int)ft_strlen(set);
	j = 0;
	h = 0;
	k = (int)ft_strlen(s1);
	while (j <= i)
	{
		if (s1[k] == set[j] && k)
		{
			--k;
			j = 0;
		}
		else
		{
			j++;
			h = k;
		}
	}
	return (h);
}

static	int	prefix(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	int	h;

	i = ft_strlen(set);
	j = 0;
	k = 0;
	h = 0;
	while (j <= i)
	{
		if ((k <= (int)ft_strlen(s1)) && s1[k] == set[j])
		{
			++k;
			j = 0;
		}
		else
		{
			j++;
			h = k;
		}
	}
	return (h);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = prefix(s1, set);
	end = suffix(s1, set);
	if (start >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	p = (char *)malloc(end - start + 2);
	if (!p)
		return (NULL);
	while (start <= end)
	{
		p[i] = s1[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
