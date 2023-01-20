#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	length2;
	int	length3;

	if (argc == 4)
	{
		length2 = 0;
		while (argv[2][length2] != '\0')
			length2++;
		length3 = 0;
		while (argv[3][length3] != '\0')
			length3++;
		if (length2 == 1 && length3 == 1)
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
		
