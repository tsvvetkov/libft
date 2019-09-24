#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;
	size_t	q;

	i = ft_strlen(src);
	q = 0;
	while (q <= i)
	{
		dest[q] = src[q];
		q++;
	}
	return (dest);
}
