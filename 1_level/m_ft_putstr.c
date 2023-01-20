#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;
	char	string_1[11] = "Hola idiota";

	str = &string_1[0];

	ft_putstr(str);
	return (0);
} 
