#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len);

int	main(int argc, char **argv)
{
	(void)argc;
	int	max_n;
	int	tab[5];

	
	tab[0] = atoi(argv[1]);
	tab[1] = atoi(argv[2]);
	tab[2] = atoi(argv[3]);
	tab[3] = atoi(argv[4]);
	tab[4] = atoi(argv[5]);

	max_n = max(tab, 5);
	printf("%d\n", max_n);
	return (0);
}
	

