/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:53:45 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/12 14:38:43 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstt;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	lstt = ft_lstnew(f(lst->content));
	if (!lstt)
		return (0);
	tmp = lstt;
	lst = lst->next;
	while (lst)
	{
		lstt->next = ft_lstnew(f(lst->content));
		if (!lstt->next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		lstt = lstt->next;
		lst = lst->next;
	}
	lstt->next = NULL;
	return (tmp);
}
