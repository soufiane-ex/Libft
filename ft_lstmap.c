/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:56:12 by schahid           #+#    #+#             */
/*   Updated: 2021/11/16 18:18:52 by schahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*k;

	k = NULL;
	while (lst && f)
	{
		p = ft_lstnew((f)(lst->content));
		if (!p)
		{
			ft_lstclear(&k, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&k, p);
		lst = lst->next;
	}
	return (k);
}
