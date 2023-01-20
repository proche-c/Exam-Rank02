int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	if (n < 1)
		return (0);
	i = 1;
	while (i <= n)
	{
		if (n == i)
			return (1);
		i = i * 2;
	}
	return (0);
}
