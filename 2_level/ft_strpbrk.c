char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	while (*s1 != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return (0);
}
