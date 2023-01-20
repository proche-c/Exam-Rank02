#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	result;
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		s1 = &argv[1][0];
		s2 = &argv[2][0];
		result = ft_strcmp(s1, s2);
		printf("%d\n", result);
	}
	return (0);
}
