#include "do_op.h"

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	result;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			result = n1 + n2;			
		else if (argv[2][0] == '-')
			result = n1 - n2;			
		else if (argv[2][0] == '*')
			result = n1 * n2;			
		else if (argv[2][0] == '/')
			result = n1 / n2;			
		else
			result = n1 % n2;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}			
