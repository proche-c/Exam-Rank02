#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	length;

	length = 0;
	while (accept[length] != '\0')
		length++;
	printf("length: %d\n", length);
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (j == length)
		{
			printf("j: %d\n", j);
			printf("s[i]: %c and i: %d\n", s[i],  i);
			return (i);
		}
		i++;
	}
	return (i);
}
