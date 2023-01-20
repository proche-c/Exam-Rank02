#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	length;
	int	i;
	char	*result;

	length = 0;
	while (src[length] != '\0')
		length++;
	result = malloc(sizeof(*result) * (length + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
