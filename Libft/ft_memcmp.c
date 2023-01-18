/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:50:57 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 12:50:57 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cstd_s1;
	const unsigned char	*cstd_s2;
	size_t				i;

	cstd_s1 = (const unsigned char *)s1;
	cstd_s2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && cstd_s1[i] == cstd_s2[i])
	{
		i++;
	}
	return (cstd_s1[i] - cstd_s2[i]);
}
