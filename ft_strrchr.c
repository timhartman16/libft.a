char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s1[i])
		i++;
	if (s1[i] == c)
		return (&s1[i]);
	i--;
	while (i >= 0)
	{
		if (s1[i] == c)
			return (&s1[i]);
		i--;
	}
	return (0);
}
