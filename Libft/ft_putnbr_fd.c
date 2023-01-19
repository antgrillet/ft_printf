/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:59:27 by agrillet          #+#    #+#             */
/*   Updated: 2022/12/19 19:48:57 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		tmp;

	tmp = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		tmp = nb % 10 + '0';
		nb = nb / 10;
		ft_putnbr_fd(nb, fd);
		ft_putchar_fd (tmp, fd);
	}
	else
	{
		tmp = nb + 48;
		ft_putchar_fd (tmp, fd);
	}
}
