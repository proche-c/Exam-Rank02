#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(int argc, char **argv)
{
	size_t	result;
	const char	*s;
	const char	*accept;

	result = 10000;
	if (argc == 3)
	{
		s = &argv[1][0];
		accept = &argv[2][0];
		result = ft_strspn(s, accept);
	}
	printf("%lu\n", result);
	return (0);
}
