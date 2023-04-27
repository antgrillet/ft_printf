/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_signed.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:55:27 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/19 17:02:29 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_error_base(const char *base)
{
	unsigned long	i;
	int				y;
	int				count;

	y = 32;
	if (((unsigned long)ft_strlen(base)) <= 1)
		return (1);
	while (y != 126)
	{
		i = 0;
		count = 0;
		while (i < (unsigned long)ft_strlen(base))
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

int		ft_putnbr_base_signed(long long nbr, const char *base)
{
	int	c;
	int	b;
	int i;

	b = ft_strlen(base);
	i = 0;
	c = 0;
	if ((ft_error_base(base)) == 1)
		return (0);
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', 1);
			nbr = nbr * -1;
		}
		if (nbr >= 16)
		{
			c = nbr % b;
			nbr = nbr / b;
			ft_putnbr_base_signed(nbr, base);
			ft_putchar_fd(base[c], 1);
			i++;
		}
		else
			ft_putchar_fd(base[nbr], 1);
	}
	i++;
	return (i);
}