/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:38:49 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/19 16:58:56 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_x(unsigned int nbr, char *base)
{
	if (nbr >= 16)
		return (ft_print_x(nbr / 16, base) + ft_print_x(nbr % 16, base));
	else
		return (ft_putchar_printf(base[nbr]));
}

int	ft_print_hexa(unsigned long long ptr, char *base)
{
	if (ptr >= 16)
		return (ft_print_hexa(ptr / 16, base) + ft_print_hexa(ptr % 16, base));
	else
		return (ft_putchar_printf(base[ptr]));
}

static	int	adress_printer(unsigned long ptr, char *base)
{
	ft_putstr_fd("0x", 1);
	return (ft_print_hexa(ptr, base) + 2);
}

int	verif_hexa(unsigned long ptr, char *base)
{
	if (ptr < 0)
		return (ft_putstr_printf("(nil)"));
	else
		return (adress_printer(ptr, base));
}
