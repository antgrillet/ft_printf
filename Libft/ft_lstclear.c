/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:42:17 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/09 17:42:17 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*actual;
	t_list	*next;

	if (lst)
	{
		actual = *lst;
		while (actual)
		{
			next = actual->next;
			ft_lstdelone(actual, (del));
			actual = next;
		}
		*lst = NULL;
	}
}
