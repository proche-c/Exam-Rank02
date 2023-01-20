char	*ft_strrev(char *str)
{
	char	temp;
	int	i;
	int	final;

	final = 0;
	while (str[final] != '\0')
		final++;
	final--;
	i = 0;
	while (i < final)
	{
		temp = str[i];
		str[i] = str[final];
		str[final] = temp;
		i++;
		final--;
	}
	return (str);
}
