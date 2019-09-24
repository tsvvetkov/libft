#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)ptr;
	while (num != 0)
	{
		num--;
		tmp[num] = (unsigned char)value;
	}
	return (ptr);
}

