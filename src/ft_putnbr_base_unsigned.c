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

static int	count_bytes(unsigned int nbr)
{
	int	counter;

	counter = -1;
	if (nbr == 0)
		return (1);
	while(nbr != 0)
	{
		nbr = nbr / 10;
		counter++;
	}
	return(counter);
}
int		ft_uitoa(unsigned int nbr)
{
	char	*str;
	int		count;
	int		len;
	
	str = malloc(sizeof(char) * count_bytes(nbr) + 2);
	len = count_bytes(nbr);
	count = 0;
	if (nbr == 0)
	{
		free(str);
		return(ft_putchar_printf('0'));
	}
	while(nbr)
	{
		str[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
		count++;
	}
	str[count] = '\0';
	ft_putstr_fd(str, 1);
	free(str);
	return(count);
}