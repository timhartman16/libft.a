#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ss1;
	char	*cpy;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	ss1 = (char *)s1;
	while (ss1[i])
	{
		len++;
		i++;
	}
	cpy = malloc(sizeof(char) * (len + 1));
	if (!(cpy))
		return (0);
	i = 0;
	while (ss1[i])
	{
		cpy[i] = ss1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
