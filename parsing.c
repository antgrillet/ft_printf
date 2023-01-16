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

#include "libftprintf.h"

char	*what_type(char	*format);
{
	size_t	i;

	i = 0;
	while(format[i])
	{
		if(format[i] == '%')
		{
			if(format[i + 1] == 'c' && !ft_isalnum(format[i + 2]))
				return(int);
			if(format[i + 1] == 's' && !ft_isalnum(format[i + 2]))
				return (char *);
			if(format[i + 1] == 'p' && !ft_isalnum(format[i + 2]))
				return(void *);
		}
		i++;
	}
	return (NULL);
}

int ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*cp_format;

	cp_format = strdup(format);
	va_start(ap, const char *);

}
