#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *tmp;

	tmp = (unsigned char *)malloc(size);
	if (NULL == tmp)
		return (NULL);
	while (size != 0)
	{
		size--;
		*(tmp + size) = 0;
	}
	return ((void *)tmp);
}
