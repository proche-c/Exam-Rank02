#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject);

int	main(int argc, char **argv)
{
	size_t	result;
	const char	*s;
	const char	*reject;

	if (argc == 3)
	{
		s = &argv[1][0];
		reject = &argv[2][0];
		result = ft_strcspn(s, reject);
		printf("%lu\n", result);
	}
	return (0);
}
