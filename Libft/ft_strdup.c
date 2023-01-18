/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:55:57 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/20 11:55:57 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*duplication;

	i = 0;
	duplication = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (duplication == NULL)
		return (NULL);
	else
	{
		while (i < ft_strlen((char *)s))
		{
			duplication[i] = s[i];
			i++;
		}
		duplication[i] = '\0';
	}
	return (duplication);
}
