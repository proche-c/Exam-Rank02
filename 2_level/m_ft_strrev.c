#include <stdio.h>

char	*ft_strrev(char *str);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = &argv[1][0];
		printf ("str es %s y su puntero es %p\n", str, str);
		ft_strrev(str);
		printf ("Ahora str es %s y su puntero es %p\n", str, str);
	}
	return (0);
}

