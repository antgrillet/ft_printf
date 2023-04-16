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

void	ft_print_hexa(unsigned long ptr)
{
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_unsigned(ptr, "0123456789abcdef");
}