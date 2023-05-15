/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:35:04 by agrillet          #+#    #+#             */
/*   Updated: 2023/01/16 17:35:04 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	what_type_and_print(const char *cp_format, va_list ap, int i)
{
	if (cp_format[i + 1] == 'c')
		return (ft_putchar_printf(va_arg(ap, int)));
	if (cp_format[i + 1] == 's')
		return (ft_putstr_printf(va_arg(ap, char *)));
	if (cp_format[i + 1] == 'd' || cp_format[i + 1] == 'i')
		return (ft_putnbr_printf(va_arg(ap, int)));
	if (cp_format[i + 1] == '%')
		return (ft_putchar_printf('%'));
	if (cp_format[i + 1] == 'p')
		return (verif_hexa(va_arg(ap, unsigned long), "0123456789abcdef"));
	if (cp_format[i + 1] == 'u')
		return (ft_uitoa(va_arg(ap, unsigned int)));
	if (cp_format[i + 1] == 'x')
		return (ft_print_x(va_arg(ap, unsigned int), "0123456789abcdef"));
	if (cp_format[i + 1] == 'X')
		return (ft_print_x(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count = count + what_type_and_print(format, args, i);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
