/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:50:47 by schahid           #+#    #+#             */
/*   Updated: 2021/11/11 15:17:45 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p ;
	t_list	*l ;

	if (*lst != NULL && del != NULL)
	{
		l = *lst ;
		while (l != NULL)
		{
			p = l;
			l = l->next;
			(del)(p->content);
			free(p);
		}
		*lst = NULL ;
	}
}
