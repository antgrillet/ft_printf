/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:52:14 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:52:14 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cstd_dst;
	unsigned char		*cstd_src;

	cstd_dst = (unsigned char *)dst;
	cstd_src = (unsigned char *)src;
	i = 0;
	if (cstd_dst == 0 && cstd_src == 0)
		return (0);
	while (i != n)
	{
		cstd_dst[i] = cstd_src[i];
		i++;
	}
	return (dst);
}
