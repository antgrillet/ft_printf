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

# include "../Libft/libft.h"
# include	<stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_uitoa(unsigned int nbr);
int	verif_hexa(unsigned long ptr, char *base);
int	ft_print_hexa(unsigned long long ptr, char *base);
int	ft_print_x(unsigned int nbr, char *base);
int	ft_putchar_printf(char c);
int	ft_putnbr_printf(int c);
int	ft_putstr_printf(char *c);

#endif