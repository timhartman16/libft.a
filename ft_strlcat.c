#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_s;

	i = 0;
	j = ft_strlen(dst);
	dst_s = j;
	while (src[i] && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize < dst_s)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + dst_s);
}
