#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*src1;
	size_t	len;

	i = 0;
	if (!(src))
		return (0);
	src1 = (char *)src;
	len = 0;
	while (src1[i])
	{	
		len++;
		i++;
	}
	i = 0;
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src1[i])
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
