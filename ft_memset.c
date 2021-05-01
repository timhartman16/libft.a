#include <string.h>

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t			i;
	unsigned char	*buf1;

	i = 0;
	buf1 = (unsigned char *)buf;
	while (i < count)
	{
		buf1[i] = ch;
		i++;
	}
	return (buf1);
}
