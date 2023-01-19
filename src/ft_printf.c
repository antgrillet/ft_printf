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

#include "../include/libftprintf.h"

int	what_type_and_print(char *cp_format, va_list ap, int i)
{
				if(cp_format[i + 1] == 'c')
					return(ft_putchar_fd(va_arg(ap, int), 1),1);
				if(cp_format[i + 1] == 's')
					return(ft_putstr_fd(va_arg(ap, char *), 1),1);
				if(cp_format[i + 1] == 'd' || cp_format[i + 1] == 'i')
					return(ft_putstr_fd(ft_itoa(va_arg(ap, int)),1),1);
				if(cp_format[i + 1] == '%')
					return(ft_putchar_fd('%',1),1);
				if(cp_format[i + 1] == 'p')
					return(ft_print_hexa(va_arg(ap, unsigned long)),1);
				if(cp_format[i + 1] == 'u')
					return(ft_putnbr_base_unsigned(va_arg(ap, unsigned int), "0123456789"), 1);
				if(cp_format[i + 1] == 'x')
					return(ft_putnbr_base_signed(va_arg(ap, int),"0123456789abcdef"),1);
				if(cp_format[i + 1] == 'X')
					return(ft_putnbr_base_signed(va_arg(ap, int),"0123456789ABCDEF"),1);

	return(0);
}

int ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*cp_format;
	int			i;

	cp_format = strdup(format);
	if(!cp_format)
		return (0);
	va_start(ap, format);
	while(cp_format[i])
	{
		if(cp_format[i] == '%')
			i =  i + what_type_and_print(cp_format, ap, i);
		else
			ft_putchar_fd(cp_format[i],1);
		i++;
	}
	va_end(ap);
	return(i);
}

int	main(void)
{
	char	name[] = "Antonin";
	int		i = 19;
	int		a = -145;
	unsigned long long	max = 18446744073709551615;
	void	*ptr;

	a = -1844555555;
	ptr = malloc(sizeof(char) * 10);
	ft_printf("je m'appelle %s , j'ai %d, pour un nombre negatif je dirais %d, le max d'un nombre decimal pas signe est %u\n",name,i,a,max);
	return (0);
}
