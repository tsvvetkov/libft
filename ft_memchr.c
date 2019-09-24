#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t num)
{
	const unsigned char	*tmpstr;
	unsigned char		c;

	tmpstr = (const unsigned char *)str;
	c = (unsigned char)ch;
	while (num != 0)
	{
		if (*(tmpstr) == c)
			return ((void *)tmpstr);
		num--;
		tmpstr++;
	}
	return (NULL);
}
