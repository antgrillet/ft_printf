#include <stdio.h>
#include "./include/ft_printf.h"

int	main(void)
{
	long long	a;
	void	*ptr;

	a = 1844555555;
	ptr = malloc(sizeof(char) * 10);
	ft_printf("voici une lettre %s %s.\n","gd","ui");
	return (0);
} 