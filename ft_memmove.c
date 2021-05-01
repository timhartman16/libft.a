#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	i = 0;
	if (!(dst) && !(src))
		return (0);
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (dst1 <= src1)
	{
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			dst1[len] = src1[len];
		}
	}
	return (dst1);
}
