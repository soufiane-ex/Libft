/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:04:25 by schahid           #+#    #+#             */
/*   Updated: 2021/11/09 11:48:07 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(const char str)
{
	return ((str >= 9 && str <= 13) || str == 32);
}

int	ft_atoi(const char *str)
{
	int	res ;
	int	i ;
	int	sign ;

	res = 0 ;
	i = 0 ;
	sign = 1 ;
	while (ft_isspace(*str))
		str++ ;
	if (*str == '-')
	{
		sign = -1 ;
		str++;
	}
	else if (*str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0') * sign ;
		i++;
	}
	return (res);
}
