#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*result;
	char	*src;

	if (argc == 2)
	{
		src = &argv[1][0];
		result = ft_strdup(src);
		printf("src es %s, su puntero es %p y su tamaño es %lu\n", src, src, sizeof(src));
		printf("result es %s, su puntero es %p y su tamaño es %lu\n", result, result, sizeof(result));
	}
	return (0);
}
