#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;

	if (argc == 2)
	{
		length = 0;
		while (argv[1][length] != '\0')
			length++;
		if (length > 0)
		{
			length = length - 1;
			while (length >= 0)
			{
				write(1, &argv[1][length], 1);
				length--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
