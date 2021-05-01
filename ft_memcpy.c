#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	i = 0;
	if (!(dst) && !(src))
		return (0);
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
