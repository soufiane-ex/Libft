/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:35:05 by schahid           #+#    #+#             */
/*   Updated: 2021/11/06 13:41:30 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i ;

	i = 0 ;
	if (s)
	{
		while (s[i])
		{
			write (fd, &s[i], 1);
			i++ ;
		}
	}
	write (fd, "\n", 1);
}