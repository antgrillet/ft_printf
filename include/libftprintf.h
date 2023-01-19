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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "../Libft/libft.h"
#include <stdarg.h>

int ft_printf(const char *, ...);
void	ft_putnbr_base_signed(long long nbr, const char *base);
void	ft_putnbr_base_unsigned(unsigned long nbr, const char *base);
void	ft_print_hexa(unsigned long ptr);

#endif