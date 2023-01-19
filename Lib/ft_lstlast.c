/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:38:30 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/20 11:38:30 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*count;

	if (!lst)
		return (NULL);
	count = lst;
	while ((count -> next) != NULL)
	{
		count = count -> next;
	}
	return (count);
}
