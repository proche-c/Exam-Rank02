#include <unistd.h>

void	ft_putnbr(int num)
{
	char	n;

	if (num > 9)
		ft_putnbr(num / 10);
	n = num % 10 + '0';
	write(1, &n, 1);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num < 101)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (num % 3 == 0)
			write(1, "fizz\n", 5);
		else if (num % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(num);
			write(1, "\n", 1);
		}
		num++;
	}
	return (0);
}
