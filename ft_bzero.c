#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)ptr;
	while (num != 0)
	{
		num--;
		tmp[num] = 0;
	}
}
