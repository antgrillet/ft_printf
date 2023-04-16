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

int ft_putstr_printf1(int c)
{
	ft_putstr_fd(ft_itoa(c), 1);
	return(ft_strlen(ft_itoa(c)));
}

int	ft_putstr_printf2(char *c)
{
	ft_putstr_fd(c , 1);
	return(ft_strlen(c));
}