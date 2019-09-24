#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	q;

	q = 0;
	while (src[q] != '\0' && q < n)
	{
		dest[q] = src[q];
		q++;
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}
