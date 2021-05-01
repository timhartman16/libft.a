#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big;
	char	*little;

	i = 0;
	big = (char *)haystack;
	little = (char *)needle;
	if (!(*little))
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
				return (big + i);
			j++;
		}
		i++;
	}
	return (0);
}
