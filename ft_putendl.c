#include "libft.h"

void	ft_putendl(char const *s)
{
	if (!s)
		return ;
	else
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
