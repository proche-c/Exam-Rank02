#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n);

int	main(int argc, char **argv)
{
	unsigned int	n;
	int	result;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		result = is_power_of_2(n);
		printf("%d\n", result);
	}
	else
	{
		result = 10000000;
		printf("Wrong parameters\n");
	}
	return (0);
}
