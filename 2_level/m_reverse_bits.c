#include <stdio.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	unsigned char	result;
	unsigned char	octet;
	(void)argc;

	octet = (unsigned char)atoi(argv[1]);
	result = reverse_bits(octet);
	printf("%d\n", result);
	return (0);
}


