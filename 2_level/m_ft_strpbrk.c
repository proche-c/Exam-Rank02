#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int	main(int argc, char **argv)
{
	char	*result;
	const char	*s1;
	const char	*s2;

	if (argc == 3)
	{
		s1 = &argv[1][0];
		s2 = &argv[2][0];
		result = ft_strpbrk(s1, s2);
		printf ("%s\n", result);
	}
	return (0);
}

