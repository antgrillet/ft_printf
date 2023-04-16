/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:29:05 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/16 17:29:05 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../Libft/libft.h"
#include <stdarg.h>

int 	ft_printf(const char *, ...);
int		ft_putnbr_base_signed(long long nbr, const char *base);
int		ft_putnbr_base_unsigned(unsigned long nbr, const char *base);
void	ft_print_hexa(unsigned long ptr);
int		ft_putchar_printf(char c);
int 	ft_putstr_printf1(int c);
int		ft_putstr_printf2(char *c);

#endif