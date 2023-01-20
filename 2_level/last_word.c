#include <unistd.h>

int	main(int argc, char **argv)
{
	int	end;
	int	start;

	if (argc == 2)
	{
		end = 0;
		while (argv[1][end] != '\0')
			end++;
		end--;
		while ((argv[1][end] == ' ' || argv[1][end] == '\t') && end >= 0)
			end--;
		start = end;
		while (argv[1][start] != ' ' && argv[1][start] != '\t' && start >= 0)
			start--;
		start++;
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

		
