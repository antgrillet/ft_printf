/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:52:35 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:52:35 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cstd_dest;
	char	*cstd_src;
	size_t	i;

	cstd_dest = (char *)dst;
	cstd_src = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (cstd_dest > cstd_src)
	{
		while (len-- != 0)
			cstd_dest[len] = cstd_src[len];
	}
	else
	{
		while (i < len)
		{
			cstd_dest[i] = cstd_src[i];
			i++;
		}
	}
	return (dst);
}
