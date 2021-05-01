#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if (s1[i] == c)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (s1 = NULL);
}
