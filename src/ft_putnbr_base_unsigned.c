/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:57:12 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/19 16:59:33 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_error_base(const char *base)
{
	unsigned long	i;
	int				y;
	int				count;

	y = 32;
	if ((ft_strlen(base)) <= 1)
		return (1);
	while (y != 126)
	{
		i = 0;
		count = 0;
		while (i < ft_strlen(base))
		{
			if (base[i] == y)
				count++;
			if (count == 2)
				return (1);
			if (base[i] == 43 || base[i] == 45)
				return (1);
			i++;
		}
		y++;
	}
	return (0);
}

int		ft_putnbr_base_unsigned(unsigned long nbr, const char *base)
{
	int	c;
	int	b;

	b = ft_strlen(base);
	c = 0;
	if ((ft_error_base(base)) == 1)
		return (0);
	else
	{
		if (nbr >= (ft_strlen(base)))
		{
			c = nbr % b;
			nbr = nbr / b;
			ft_putnbr_base_unsigned(nbr, base);
			ft_putchar_fd(base[c], 1);
		}
		else
			ft_putchar_fd(base[nbr], 1);
	}
	return(ft_strlen(base));
}
