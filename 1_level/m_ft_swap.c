#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 4;
	int	b = 8;

	printf("a vale %d y b vale %d\n", a, b);
	ft_swap(&a, &b);
	printf("Ahora a vale %d y b vale %d\n", a, b);
	return (0);
}
