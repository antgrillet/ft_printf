/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:09:41 by agrillet          #+#    #+#             */
/*   Updated: 2023/02/12 12:09:41 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar_printf(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putnbr_printf(int c)
{
	char	*str;
	int		count;

	str = ft_itoa(c);
	if (str == NULL)
		return (-1);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

int	ft_putstr_printf(char *c)
{
	if (c == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	if (!c)
		return (-1);
	ft_putstr_fd(c, 1);
	return (ft_strlen(c));
}
