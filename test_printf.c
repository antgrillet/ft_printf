#include <stdio.h>

int	main(void)
{
	long long	a;
	void	*ptr;

	a = 1844555555;
	ptr = malloc(sizeof(char) * 10);
	printf("je m'appelle %s, j'ai %d ans et ma lettre preferee est %c et mon pointeur est a l'adresse %p et ceci est un %%, ceci est une decimqle non signe %u", "antonin", a, 'a', ptr, a);
	return (0);
}