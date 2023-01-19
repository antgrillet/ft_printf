/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:08:29 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/14 15:08:29 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*cstd_b;

	i = 0;
	cstd_b = (unsigned char *)b;
	while (i != len)
	{
		cstd_b[i] = c;
		i++;
	}
	b = (void *)cstd_b;
	return (b);
}
