/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrillet <anto73grillet@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:37:01 by agrillet          #+#    #+#             */
/*   Updated: 2023/05/15 16:57:46 by agrillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "stdio.h"

int main(void)
{
	int count;
	 
	count = printf("%c%c%c", '0', 0, '1');
	printf("%d\n", count);
	count = ft_printf("%c%c%c", '0', 0, '1');
	printf("%d\n", count);
}