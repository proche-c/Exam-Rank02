#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	string_1[15] = "  adios tooonto";

	s1 = &string_1[0];
	printf ("s1 es:  %s\n", s1);
	if (argc == 2)
	{
		s2 = &argv[1][0];
		ft_strcpy(s1,s2);
	}
	printf ("Ahora s1 es:  %s\n", s1);
	return (0);
}
