/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:44:28 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 16:41:04 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*lenouvelelements;

	lenouvelelements = malloc(sizeof(t_list));
	if (!lenouvelelements)
		return (NULL);
	lenouvelelements -> content = content;
	lenouvelelements -> next = NULL;
	return (lenouvelelements);
}
